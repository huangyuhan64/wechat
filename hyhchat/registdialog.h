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
    void slot_reg_mod_finsih(ReqId id,QString res,ErrCodes err);
private:
    void initHttpHandlers();
    Ui::RegistDialog *ui;
    //邮箱匹配失败提示错误
    void showTip(QString str,bool b_ok);
    QMap<ReqId,std::function<void(const QJsonObject&)>>_handlers;
};

#endif // REGISTDIALOG_H
