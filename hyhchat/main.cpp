#include "mainwindow.h"
#include "global.h"
#include <QApplication>
#include<QFile>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile qss(":/style/stylesheet.qss");
    if(qss.open(QFile::ReadOnly)){
        qDebug("open sucess");
        QString style =QLatin1String(qss.readAll());
        a.setStyleSheet(style);
        qss.close();
    }else{
        qDebug("open failed");
    }

    QString fileName="config.ini";
    QString app_path=QCoreApplication::applicationDirPath();
    QString config_path =QDir::toNativeSeparators( app_path+ QDir::separator()+fileName);
    QSettings settings (config_path,QSettings::IniFormat);
    QString gata_host=settings.value("GataServer/host").toString();
    QString gata_port=settings.value("GataServer/port").toString();
    gata_url_prefix="http://"+gata_host+":"+gata_port;



    MainWindow w;
    w.show();
    return a.exec();
}
