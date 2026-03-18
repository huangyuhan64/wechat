#include "registdialog.h"
#include "ui_registdialog.h"

#include "httpmgr.h"
RegistDialog::RegistDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegistDialog)
{
    ui->setupUi(this);
    ui->pass_edit->setEchoMode(QLineEdit::Password);
    ui->confirmpass_edit->setEchoMode(QLineEdit::Password);
    ui->err_tip->setProperty("state","normal");
    repolish(ui->err_tip);
    connect(HttpMgr::GetInstance().get(),&HttpMgr::sig_reg_mod_finish,this,&RegistDialog::slot_reg_mod_finsih);
    initHttpHandlers();
}

RegistDialog::~RegistDialog()
{
    delete ui;
}


//判断邮箱是否匹配
void RegistDialog::on_get_code_btn_clicked()
{

    auto email=ui->email_edit->text();
    QRegularExpression regex(R"((\w+)(\.|_)?(\w*)@(\w+)(\.(\w+))+)");
    bool match=regex.match(email).hasMatch();
    if(match)
    {
        //发送http验证码
        QJsonObject json_obj;
        json_obj["email"]=email;
        HttpMgr::GetInstance()->PostHttpReq(QUrl(gata_url_prefix+"/get_varifycode"),
                                            json_obj,ReqId::ID_GET_VARIFY_CODE,Modules::REGISTERMOD);


    }
    else{
        showTip(tr("邮箱地址不正确"),false);

    }
}

void RegistDialog::slot_reg_mod_finsih(ReqId id, QString res, ErrCodes err)
{
    if(err!=ErrCodes::SUCCESS){
        showTip(tr("网络请求错误"),false);
        return;
    }
    //解析json 字符串，res转化为qbytearray
    QJsonDocument jsonDoc=QJsonDocument::fromJson(res.toUtf8());
    if(jsonDoc.isNull()){
        showTip(tr("json解析失败"),false);
        return;
    }
    //json解析错误
    if(!jsonDoc.isObject()){
        showTip(tr("json解析失败"),false);
        return;
    }

    _handlers[id](jsonDoc.object());
    return;
}

void RegistDialog::initHttpHandlers()
{
    _handlers.insert(ReqId::ID_GET_VARIFY_CODE,[this](const QJsonObject& jsonObj){
        int error=jsonObj["error"].toInt();
        if(error!=ErrCodes::SUCCESS){
            showTip(tr("参数错误"),false);
            return;
        }
        auto email=jsonObj["email"].toString();
        showTip(tr("验证码已经发送到邮箱,注意查收"),true);
        qDebug()<<"email is"<<email;
    });
}

void RegistDialog::showTip(QString str,bool b_ok)
{
    if(b_ok){
        ui->err_tip->setProperty("state","normal");
    }
    else{
        ui->err_tip->setProperty("state","err");
    }
    ui->err_tip->setText(str);

    repolish(ui->err_tip);
}

