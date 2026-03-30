#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"logindialog.h"
#include <QMainWindow>
#include"registdialog.h"
#include "resetdialog.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    LoginDialog *_login_dlg;
    RegistDialog *_reg_dlg;
    ResetDialog * _reset_dlg;
public slots:
    void slotSwitchReg();
    void SlotSwitchLogin();
    void SlotSwitchReset();
    void SlotSwitchLogin2();
};
#endif // MAINWINDOW_H
