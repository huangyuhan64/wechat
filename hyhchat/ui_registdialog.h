/********************************************************************************
** Form generated from reading UI file 'registdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTDIALOG_H
#define UI_REGISTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clickedlabel.h"
#include "timerbtn.h"

QT_BEGIN_NAMESPACE

class Ui_RegistDialog
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_7;
    QLabel *err_tip;
    QHBoxLayout *horizontalLayout_6;
    QLabel *user_lable;
    QLineEdit *user_edit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *email_lable;
    QLineEdit *email_edit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *pass_lable;
    QLineEdit *pass_edit;
    ClickedLabel *pass_visible;
    QHBoxLayout *horizontalLayout_3;
    QLabel *confirm_lable;
    QLineEdit *confirm_edit;
    ClickedLabel *confirm_visible;
    QHBoxLayout *horizontalLayout_2;
    QLabel *varify_lable_2;
    QLineEdit *varify_edit;
    TimerBtn *get_code_btn;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *sure_btn;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancle_btn;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_4;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QLabel *tip_lb;
    QLabel *tip_lb2;
    QSpacerItem *verticalSpacer_5;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *return_button;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QDialog *RegistDialog)
    {
        if (RegistDialog->objectName().isEmpty())
            RegistDialog->setObjectName(QString::fromUtf8("RegistDialog"));
        RegistDialog->resize(350, 475);
        RegistDialog->setMinimumSize(QSize(350, 475));
        RegistDialog->setMaximumSize(QSize(350, 475));
        RegistDialog->setLayoutDirection(Qt::LeftToRight);
        stackedWidget = new QStackedWidget(RegistDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 350, 475));
        stackedWidget->setMinimumSize(QSize(350, 475));
        stackedWidget->setMaximumSize(QSize(350, 475));
        stackedWidget->setBaseSize(QSize(350, 475));
        stackedWidget->setLineWidth(0);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        widget = new QWidget(page_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(11, 11, 328, 453));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 26, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        widget1 = new QWidget(widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        horizontalLayout_7 = new QHBoxLayout(widget1);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        err_tip = new QLabel(widget1);
        err_tip->setObjectName(QString::fromUtf8("err_tip"));

        horizontalLayout_7->addWidget(err_tip);


        gridLayout->addWidget(widget1, 1, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        user_lable = new QLabel(widget);
        user_lable->setObjectName(QString::fromUtf8("user_lable"));
        user_lable->setMinimumSize(QSize(0, 30));
        user_lable->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_6->addWidget(user_lable);

        user_edit = new QLineEdit(widget);
        user_edit->setObjectName(QString::fromUtf8("user_edit"));
        user_edit->setMinimumSize(QSize(0, 30));
        user_edit->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_6->addWidget(user_edit);


        gridLayout->addLayout(horizontalLayout_6, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        email_lable = new QLabel(widget);
        email_lable->setObjectName(QString::fromUtf8("email_lable"));
        email_lable->setMinimumSize(QSize(0, 30));
        email_lable->setMaximumSize(QSize(16777215, 3015));

        horizontalLayout_5->addWidget(email_lable);

        email_edit = new QLineEdit(widget);
        email_edit->setObjectName(QString::fromUtf8("email_edit"));
        email_edit->setMinimumSize(QSize(0, 30));
        email_edit->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_5->addWidget(email_edit);


        gridLayout->addLayout(horizontalLayout_5, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pass_lable = new QLabel(widget);
        pass_lable->setObjectName(QString::fromUtf8("pass_lable"));
        pass_lable->setMinimumSize(QSize(0, 30));
        pass_lable->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_4->addWidget(pass_lable);

        pass_edit = new QLineEdit(widget);
        pass_edit->setObjectName(QString::fromUtf8("pass_edit"));
        pass_edit->setMinimumSize(QSize(0, 30));
        pass_edit->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_4->addWidget(pass_edit);

        pass_visible = new ClickedLabel(widget);
        pass_visible->setObjectName(QString::fromUtf8("pass_visible"));
        pass_visible->setMinimumSize(QSize(20, 30));
        pass_visible->setMaximumSize(QSize(20, 30));

        horizontalLayout_4->addWidget(pass_visible);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        confirm_lable = new QLabel(widget);
        confirm_lable->setObjectName(QString::fromUtf8("confirm_lable"));
        confirm_lable->setMinimumSize(QSize(0, 30));
        confirm_lable->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_3->addWidget(confirm_lable);

        confirm_edit = new QLineEdit(widget);
        confirm_edit->setObjectName(QString::fromUtf8("confirm_edit"));
        confirm_edit->setMinimumSize(QSize(0, 30));
        confirm_edit->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_3->addWidget(confirm_edit);

        confirm_visible = new ClickedLabel(widget);
        confirm_visible->setObjectName(QString::fromUtf8("confirm_visible"));
        confirm_visible->setMinimumSize(QSize(20, 30));
        confirm_visible->setMaximumSize(QSize(20, 30));

        horizontalLayout_3->addWidget(confirm_visible);


        gridLayout->addLayout(horizontalLayout_3, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        varify_lable_2 = new QLabel(widget);
        varify_lable_2->setObjectName(QString::fromUtf8("varify_lable_2"));
        varify_lable_2->setMinimumSize(QSize(0, 30));
        varify_lable_2->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(varify_lable_2);

        varify_edit = new QLineEdit(widget);
        varify_edit->setObjectName(QString::fromUtf8("varify_edit"));
        varify_edit->setMinimumSize(QSize(0, 30));
        varify_edit->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(varify_edit);

        get_code_btn = new TimerBtn(widget);
        get_code_btn->setObjectName(QString::fromUtf8("get_code_btn"));
        get_code_btn->setMinimumSize(QSize(0, 30));
        get_code_btn->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_2->addWidget(get_code_btn);


        gridLayout->addLayout(horizontalLayout_2, 6, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 55, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_2, 7, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        sure_btn = new QPushButton(widget);
        sure_btn->setObjectName(QString::fromUtf8("sure_btn"));
        sure_btn->setMinimumSize(QSize(120, 40));
        sure_btn->setMaximumSize(QSize(120, 40));

        horizontalLayout->addWidget(sure_btn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancle_btn = new QPushButton(widget);
        cancle_btn->setObjectName(QString::fromUtf8("cancle_btn"));
        cancle_btn->setMinimumSize(QSize(120, 40));
        cancle_btn->setMaximumSize(QSize(120, 40));

        horizontalLayout->addWidget(cancle_btn);


        gridLayout->addLayout(horizontalLayout, 8, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 63, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_3, 9, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout = new QVBoxLayout(page_4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        tip_lb = new QLabel(page_4);
        tip_lb->setObjectName(QString::fromUtf8("tip_lb"));
        tip_lb->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(tip_lb);

        tip_lb2 = new QLabel(page_4);
        tip_lb2->setObjectName(QString::fromUtf8("tip_lb2"));
        tip_lb2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(tip_lb2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        widget_2 = new QWidget(page_4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_8 = new QHBoxLayout(widget_2);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_2 = new QSpacerItem(97, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        return_button = new QPushButton(widget_2);
        return_button->setObjectName(QString::fromUtf8("return_button"));

        horizontalLayout_8->addWidget(return_button);

        horizontalSpacer_3 = new QSpacerItem(96, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget_2);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        stackedWidget->addWidget(page_4);

        retranslateUi(RegistDialog);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RegistDialog);
    } // setupUi

    void retranslateUi(QDialog *RegistDialog)
    {
        RegistDialog->setWindowTitle(QCoreApplication::translate("RegistDialog", "Dialog", nullptr));
        err_tip->setText(QCoreApplication::translate("RegistDialog", "\351\224\231\350\257\257\346\217\220\347\244\272", nullptr));
        user_lable->setText(QCoreApplication::translate("RegistDialog", "\347\224\250\346\210\267\357\274\232", nullptr));
        email_lable->setText(QCoreApplication::translate("RegistDialog", "\351\202\256\347\256\261\357\274\232", nullptr));
        pass_lable->setText(QCoreApplication::translate("RegistDialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        pass_visible->setText(QString());
        confirm_lable->setText(QCoreApplication::translate("RegistDialog", "\347\241\256\350\256\244\357\274\232", nullptr));
        confirm_visible->setText(QString());
        varify_lable_2->setText(QCoreApplication::translate("RegistDialog", "\351\252\214\350\257\201\347\240\201\357\274\232", nullptr));
        get_code_btn->setText(QCoreApplication::translate("RegistDialog", "\350\216\267\345\217\226", nullptr));
        sure_btn->setText(QCoreApplication::translate("RegistDialog", "\347\241\256\345\256\232", nullptr));
        cancle_btn->setText(QCoreApplication::translate("RegistDialog", "\345\217\226\346\266\210", nullptr));
        tip_lb->setText(QCoreApplication::translate("RegistDialog", "\346\263\250\345\206\214\346\210\220\345\212\237\357\274\2145s\345\220\216\350\277\224\345\233\236", nullptr));
        tip_lb2->setText(QCoreApplication::translate("RegistDialog", "\345\217\257\347\202\271\345\207\273\350\277\224\345\233\236\346\214\211\351\222\256\347\233\264\346\216\245\350\277\224\345\233\236\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        return_button->setText(QCoreApplication::translate("RegistDialog", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistDialog: public Ui_RegistDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTDIALOG_H
