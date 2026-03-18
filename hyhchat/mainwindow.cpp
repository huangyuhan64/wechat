#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //登录界面初始化
    _login_dlg=new LoginDialog(this);
    setCentralWidget(_login_dlg);


    //注册界面初始化
    _reg_dlg=new RegistDialog(this);

    //注册按钮与界面的链接
    connect(_login_dlg,&LoginDialog::switchRegister,this,&MainWindow::slotSwitchReg);

    _login_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    _reg_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    _reg_dlg->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
    // if(_login_dlg)
    // {
    //     delete _login_dlg;
    //     _login_dlg=nullptr;
    // }
    // if(_reg_dlg)
    // {
    //     delete _reg_dlg;
    //     _reg_dlg=nullptr;
    // }

}

void MainWindow::slotSwitchReg()
{
    setCentralWidget(_reg_dlg);
    _login_dlg->hide();
    _reg_dlg->show();
}





