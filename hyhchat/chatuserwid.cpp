#include "chatuserwid.h"
#include "ui_chatuserwid.h"
#include<QApplication>
ChatUserWid::ChatUserWid(QWidget *parent) :
    ListItemBase(parent),
    ui(new Ui::ChatUserWid)
{
    ui->setupUi(this);
    SetItemType(ListItemType::CHAT_USER_ITEM);
}
ChatUserWid::~ChatUserWid()
{
    delete ui;
}
void ChatUserWid::SetInfo(QString name, QString head, QString msg)
{
    _name = name;
    _head = head;
    _msg = msg;
    // 加载图片
    QPixmap pixmap(_head);
    QSize logicSize =ui->icon_lb->size();
    qreal dpr=qApp->devicePixelRatio();
    QSize physicalSize =logicSize*dpr;
    QPixmap scaledPix=pixmap.scaled(physicalSize,Qt::KeepAspectRatio,Qt::SmoothTransformation);
    scaledPix.setDevicePixelRatio(dpr);
    ui->icon_lb->setPixmap(scaledPix);
    ui->icon_lb->setScaledContents(false);

    QFontMetrics fontMetrics(ui->user_name_lb->font());
    QString nameText = fontMetrics.elidedText(_name, Qt::ElideRight, ui->user_name_lb->width());
    QFontMetrics fontMetricsl(ui->user_chat_lb->font());   // 注意：变量名末尾是字母 l
    QString msgText = fontMetricsl.elidedText(_msg, Qt::ElideRight, ui->user_chat_lb->width());

    ui->user_name_lb->setText(nameText);
    ui->user_chat_lb->setText(msgText);
}
