#ifndef REGISTDIALOG_H
#define REGISTDIALOG_H

#include <QDialog>
#include<global.h>
namespace Ui {
class RegistDialog;
}

class RegistDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RegistDialog(QWidget *parent = nullptr);
    ~RegistDialog();

private slots:
    void on_get_code_btn_clicked();
    void slot_reg_mod_finsih(ReqId id,QString res,ErrorCodes err);
    void on_sure_btn_clicked();

    void on_return_button_clicked();

    void on_cancle_btn_clicked();

private:
    void initHttpHandlers();
    Ui::RegistDialog *ui;
    //邮箱匹配失败提示错误
    void showTip(QString str,bool b_ok);
    QMap<ReqId,std::function<void(const QJsonObject&)>>_handlers;

    void AddTipErr(TipErr te,QString tips);
    void DelTipErr(TipErr te);
    void ChangeTipPage();
    bool checkUserValid();
    bool checkEmailValid();
    bool checkPassValid();
    bool checkVarifyValid();
    bool checkConfirmValid();
    QMap<TipErr, QString> _tip_errs;

    QTimer * _countdown_timer;
    int _countdown;
signals:
    void sigSwitchLogin();
};

#endif // REGISTDIALOG_H
