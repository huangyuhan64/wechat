/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clickedlabel.h"

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *head_label;
    QLabel *err_tip;
    QHBoxLayout *horizontalLayout;
    QLabel *email_lb;
    QLineEdit *email_edit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *pass_lable;
    QLineEdit *pass_edit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *login_btn;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *regist_btn;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    ClickedLabel *forget_label;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(350, 475);
        LoginDialog->setMinimumSize(QSize(350, 475));
        LoginDialog->setMaximumSize(QSize(350, 475));
        verticalLayout = new QVBoxLayout(LoginDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(LoginDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        head_label = new QLabel(widget);
        head_label->setObjectName(QString::fromUtf8("head_label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(head_label->sizePolicy().hasHeightForWidth());
        head_label->setSizePolicy(sizePolicy);
        head_label->setMinimumSize(QSize(306, 216));
        head_label->setMaximumSize(QSize(306, 216));
        head_label->setScaledContents(false);
        head_label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(head_label);


        verticalLayout->addWidget(widget);

        err_tip = new QLabel(LoginDialog);
        err_tip->setObjectName(QString::fromUtf8("err_tip"));

        verticalLayout->addWidget(err_tip);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        email_lb = new QLabel(LoginDialog);
        email_lb->setObjectName(QString::fromUtf8("email_lb"));
        email_lb->setMinimumSize(QSize(50, 40));
        email_lb->setMaximumSize(QSize(50, 40));
        email_lb->setBaseSize(QSize(0, 0));

        horizontalLayout->addWidget(email_lb);

        email_edit = new QLineEdit(LoginDialog);
        email_edit->setObjectName(QString::fromUtf8("email_edit"));
        email_edit->setBaseSize(QSize(0, 0));

        horizontalLayout->addWidget(email_edit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pass_lable = new QLabel(LoginDialog);
        pass_lable->setObjectName(QString::fromUtf8("pass_lable"));
        pass_lable->setMinimumSize(QSize(50, 40));
        pass_lable->setMaximumSize(QSize(50, 40));

        horizontalLayout_2->addWidget(pass_lable);

        pass_edit = new QLineEdit(LoginDialog);
        pass_edit->setObjectName(QString::fromUtf8("pass_edit"));

        horizontalLayout_2->addWidget(pass_edit);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        login_btn = new QPushButton(LoginDialog);
        login_btn->setObjectName(QString::fromUtf8("login_btn"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(login_btn->sizePolicy().hasHeightForWidth());
        login_btn->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(login_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        regist_btn = new QPushButton(LoginDialog);
        regist_btn->setObjectName(QString::fromUtf8("regist_btn"));

        horizontalLayout_5->addWidget(regist_btn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        forget_label = new ClickedLabel(LoginDialog);
        forget_label->setObjectName(QString::fromUtf8("forget_label"));

        horizontalLayout_3->addWidget(forget_label);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "Dialog", nullptr));
        head_label->setText(QString());
        err_tip->setText(QString());
        email_lb->setText(QCoreApplication::translate("LoginDialog", "\351\202\256\347\256\261\357\274\232", nullptr));
        pass_lable->setText(QCoreApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        login_btn->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\345\275\225", nullptr));
        regist_btn->setText(QCoreApplication::translate("LoginDialog", "\346\263\250\345\206\214", nullptr));
        forget_label->setText(QCoreApplication::translate("LoginDialog", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
