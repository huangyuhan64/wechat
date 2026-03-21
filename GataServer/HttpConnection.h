#pragma once
#include"const.h"


class HttpConnection:public std::enable_shared_from_this<HttpConnection>
{
public:
	friend class LogicSystem;
public:
	HttpConnection(boost::asio::io_context &ioc);
	void start();
	tcp::socket& GetSocket() {
		return _socket;
	}
private:
	void PreParseGetParam();//参数解析
	void CheckDeadline();//超时检测
	void WriteResponse(); // 异步发送响应
	void HandleReq();  // 处理请求
	tcp::socket _socket;
	beast::flat_buffer _buffer{8192};
	http::request<http::dynamic_body> _request;  // 存储收到的请求
	http::response<http::dynamic_body> _response;// 存储要发送的响应
	net::steady_timer deadline_{
		_socket.get_executor(), std::chrono::seconds(60) };// 60 秒超时定时器

	std::string _get_url;
	std::unordered_map<std::string, std::string> _get_params;//get请求的参数解析
};

