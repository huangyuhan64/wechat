#include "CServer.h"
#include "HttpConnection.h"
CServer::CServer(boost::asio::io_context& ioc, unsigned short& port):_ioc(ioc),
_acceptor(ioc,tcp::endpoint(tcp::v4(),port)),_socket(ioc)
{

}

void CServer::start()
{
	auto self = shared_from_this();
	_acceptor.async_accept(_socket, [self](beast::error_code ec) {
		try
		{
			//出错放弃出错链接，监听其他链接
			if (ec) {
				self->start();
				return;
			}
			//创建连接,并创建HttpConnectionn类管理这个连接
			std::make_shared<HttpConnection>(std::move(self->_socket))->start();
			self->start();
		}catch(std::exception){
			std::cout << "exception is " << ec.what() << std::endl;
			self->start();
		}
		});
}
