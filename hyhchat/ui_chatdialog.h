/********************************************************************************
** Form generated from reading UI file 'chatdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATDIALOG_H
#define UI_CHATDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <applyfriendpage.h>
#include <chatpage.h>
#include <chatuserlist.h>
#include <clickedbtn.h>
#include <contactuserlist.h>
#include <customizeedit.h>
#include <friendinfopage.h>
#include <searchlist.h>
#include <statewidget.h>

QT_BEGIN_NAMESPACE

class Ui_ChatDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *side_bar;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *side_head_lb;
    StateWidget *side_chat_lb;
    StateWidget *side_contact_lb;
    QSpacerItem *verticalSpacer;
    QWidget *chat_user_wid;
    QVBoxLayout *verticalLayout_2;
    QWidget *search_wid;
    QHBoxLayout *horizontalLayout_2;
    CustomizeEdit *search_edit;
    QSpacerItem *horizontalSpacer;
    ClickedBtn *add_btn;
    ChatUserList *chat_user_list;
    SearchList *search_list;
    ContactUserList *con_user_list;
    QStackedWidget *stackedWidget;
    ChatPage *chat_page;
    FriendInfoPage *friend_info_page;
    ApplyFriendPage *friend_apply_page;

    void setupUi(QDialog *ChatDialog)
    {
        if (ChatDialog->objectName().isEmpty())
            ChatDialog->setObjectName(QString::fromUtf8("ChatDialog"));
        ChatDialog->resize(1100, 900);
        ChatDialog->setMinimumSize(QSize(1100, 800));
        horizontalLayout = new QHBoxLayout(ChatDialog);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        side_bar = new QWidget(ChatDialog);
        side_bar->setObjectName(QString::fromUtf8("side_bar"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(side_bar->sizePolicy().hasHeightForWidth());
        side_bar->setSizePolicy(sizePolicy);
        side_bar->setMinimumSize(QSize(75, 0));
        side_bar->setMaximumSize(QSize(75, 16777215));
        verticalLayout = new QVBoxLayout(side_bar);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 30, 0, 0);
        widget = new QWidget(side_bar);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(30);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        side_head_lb = new QLabel(widget);
        side_head_lb->setObjectName(QString::fromUtf8("side_head_lb"));
        side_head_lb->setMinimumSize(QSize(40, 40));
        side_head_lb->setMaximumSize(QSize(40, 40));

        verticalLayout_3->addWidget(side_head_lb);

        side_chat_lb = new StateWidget(widget);
        side_chat_lb->setObjectName(QString::fromUtf8("side_chat_lb"));
        side_chat_lb->setMinimumSize(QSize(40, 40));
        side_chat_lb->setMaximumSize(QSize(40, 40));
        side_chat_lb->setBaseSize(QSize(40, 40));

        verticalLayout_3->addWidget(side_chat_lb);

        side_contact_lb = new StateWidget(widget);
        side_contact_lb->setObjectName(QString::fromUtf8("side_contact_lb"));
        side_contact_lb->setMinimumSize(QSize(40, 40));
        side_contact_lb->setMaximumSize(QSize(40, 40));

        verticalLayout_3->addWidget(side_contact_lb);


        verticalLayout->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(side_bar);

        chat_user_wid = new QWidget(ChatDialog);
        chat_user_wid->setObjectName(QString::fromUtf8("chat_user_wid"));
        chat_user_wid->setMinimumSize(QSize(0, 0));
        chat_user_wid->setMaximumSize(QSize(300, 16777215));
        verticalLayout_2 = new QVBoxLayout(chat_user_wid);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        search_wid = new QWidget(chat_user_wid);
        search_wid->setObjectName(QString::fromUtf8("search_wid"));
        search_wid->setMinimumSize(QSize(0, 60));
        search_wid->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_2 = new QHBoxLayout(search_wid);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(9, 9, 9, 9);
        search_edit = new CustomizeEdit(search_wid);
        search_edit->setObjectName(QString::fromUtf8("search_edit"));
        search_edit->setMinimumSize(QSize(0, 32));
        search_edit->setMaximumSize(QSize(16777215, 32));

        horizontalLayout_2->addWidget(search_edit);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        add_btn = new ClickedBtn(search_wid);
        add_btn->setObjectName(QString::fromUtf8("add_btn"));
        add_btn->setMinimumSize(QSize(34, 34));
        add_btn->setMaximumSize(QSize(34, 34));

        horizontalLayout_2->addWidget(add_btn);


        verticalLayout_2->addWidget(search_wid);

        chat_user_list = new ChatUserList(chat_user_wid);
        chat_user_list->setObjectName(QString::fromUtf8("chat_user_list"));
        chat_user_list->setMinimumSize(QSize(300, 0));
        chat_user_list->setMaximumSize(QSize(300, 16777215));

        verticalLayout_2->addWidget(chat_user_list);

        search_list = new SearchList(chat_user_wid);
        search_list->setObjectName(QString::fromUtf8("search_list"));
        search_list->setMinimumSize(QSize(300, 0));
        search_list->setMaximumSize(QSize(300, 16777215));

        verticalLayout_2->addWidget(search_list);

        con_user_list = new ContactUserList(chat_user_wid);
        con_user_list->setObjectName(QString::fromUtf8("con_user_list"));
        con_user_list->setMinimumSize(QSize(300, 0));
        con_user_list->setMaximumSize(QSize(300, 16777215));

        verticalLayout_2->addWidget(con_user_list);


        horizontalLayout->addWidget(chat_user_wid);

        stackedWidget = new QStackedWidget(ChatDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QFont font;
        font.setPointSize(7);
        stackedWidget->setFont(font);
        chat_page = new ChatPage();
        chat_page->setObjectName(QString::fromUtf8("chat_page"));
        stackedWidget->addWidget(chat_page);
        friend_info_page = new FriendInfoPage();
        friend_info_page->setObjectName(QString::fromUtf8("friend_info_page"));
        stackedWidget->addWidget(friend_info_page);
        friend_apply_page = new ApplyFriendPage();
        friend_apply_page->setObjectName(QString::fromUtf8("friend_apply_page"));
        stackedWidget->addWidget(friend_apply_page);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(ChatDialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ChatDialog);
    } // setupUi

    void retranslateUi(QDialog *ChatDialog)
    {
        ChatDialog->setWindowTitle(QCoreApplication::translate("ChatDialog", "Dialog", nullptr));
        side_head_lb->setText(QString());
        add_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChatDialog: public Ui_ChatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATDIALOG_H
