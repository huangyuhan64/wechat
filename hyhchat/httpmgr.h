#ifndef HTTPMGR_H
#define HTTPMGR_H
#include"singleton.h"
#include<QString>
#include<QUrl>
#include<QObject>
#include<QNetworkAccessManager>
#include<QJsonObject>
#include<QJsonDocument>//解析json
/******************************************************************************
 * @brief      http管理
 *****************************************************************************/
class HttpMgr:public QObject,public Signleton<HttpMgr>,public std::enable_shared_from_this<HttpMgr>//crtp
{
    Q_OBJECT
public:
    ~HttpMgr();
    void PostHttpReq(QUrl url,QJsonObject json,ReqId req_id,Modules mod);
private:
    friend class Signleton<HttpMgr>;
    HttpMgr();
    QNetworkAccessManager _manager;

private slots:
    void slot_http_finish(ReqId id,QString res,ErrCodes err,Modules mod);

signals:
    void sig_http_finish(ReqId id,QString res,ErrCodes err,Modules mod);
    void sig_reg_mod_finish(ReqId id,QString res,ErrCodes err);
};

#endif // HTTPMGR_H
