/********************************************************************************
** Form generated from reading UI file 'resetdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESETDIALOG_H
#define UI_RESETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ResetDialog
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *err_tip;
    QHBoxLayout *horizontalLayout;
    QLabel *user_lb;
    QLineEdit *user_edit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *email_lb;
    QLineEdit *email_edit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *varify_lb;
    QLineEdit *varify_edit;
    QPushButton *varify_btn;
    QHBoxLayout *horizontalLayout_4;
    QLabel *pwd_lb;
    QLineEdit *pwd_edit;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *sure_btn;
    QSpacerItem *horizontalSpacer;
    QPushButton *return_btn;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *ResetDialog)
    {
        if (ResetDialog->objectName().isEmpty())
            ResetDialog->setObjectName(QString::fromUtf8("ResetDialog"));
        ResetDialog->resize(350, 475);
        verticalLayout = new QVBoxLayout(ResetDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer);

        err_tip = new QLabel(ResetDialog);
        err_tip->setObjectName(QString::fromUtf8("err_tip"));
        err_tip->setMinimumSize(QSize(0, 20));
        err_tip->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(err_tip);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        user_lb = new QLabel(ResetDialog);
        user_lb->setObjectName(QString::fromUtf8("user_lb"));
        user_lb->setMinimumSize(QSize(60, 30));
        user_lb->setMaximumSize(QSize(60, 30));

        horizontalLayout->addWidget(user_lb);

        user_edit = new QLineEdit(ResetDialog);
        user_edit->setObjectName(QString::fromUtf8("user_edit"));

        horizontalLayout->addWidget(user_edit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        email_lb = new QLabel(ResetDialog);
        email_lb->setObjectName(QString::fromUtf8("email_lb"));
        email_lb->setMinimumSize(QSize(62, 30));
        email_lb->setMaximumSize(QSize(62, 30));

        horizontalLayout_2->addWidget(email_lb);

        email_edit = new QLineEdit(ResetDialog);
        email_edit->setObjectName(QString::fromUtf8("email_edit"));

        horizontalLayout_2->addWidget(email_edit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        varify_lb = new QLabel(ResetDialog);
        varify_lb->setObjectName(QString::fromUtf8("varify_lb"));
        varify_lb->setMinimumSize(QSize(60, 30));
        varify_lb->setMaximumSize(QSize(60, 30));

        horizontalLayout_3->addWidget(varify_lb);

        varify_edit = new QLineEdit(ResetDialog);
        varify_edit->setObjectName(QString::fromUtf8("varify_edit"));

        horizontalLayout_3->addWidget(varify_edit);

        varify_btn = new QPushButton(ResetDialog);
        varify_btn->setObjectName(QString::fromUtf8("varify_btn"));
        varify_btn->setMaximumSize(QSize(55, 16777215));

        horizontalLayout_3->addWidget(varify_btn);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pwd_lb = new QLabel(ResetDialog);
        pwd_lb->setObjectName(QString::fromUtf8("pwd_lb"));
        pwd_lb->setMinimumSize(QSize(0, 30));
        pwd_lb->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_4->addWidget(pwd_lb);

        pwd_edit = new QLineEdit(ResetDialog);
        pwd_edit->setObjectName(QString::fromUtf8("pwd_edit"));

        horizontalLayout_4->addWidget(pwd_edit);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        sure_btn = new QPushButton(ResetDialog);
        sure_btn->setObjectName(QString::fromUtf8("sure_btn"));

        horizontalLayout_5->addWidget(sure_btn);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        return_btn = new QPushButton(ResetDialog);
        return_btn->setObjectName(QString::fromUtf8("return_btn"));

        horizontalLayout_5->addWidget(return_btn);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(ResetDialog);

        QMetaObject::connectSlotsByName(ResetDialog);
    } // setupUi

    void retranslateUi(QDialog *ResetDialog)
    {
        ResetDialog->setWindowTitle(QCoreApplication::translate("ResetDialog", "Dialog", nullptr));
        err_tip->setText(QString());
        user_lb->setText(QCoreApplication::translate("ResetDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        email_lb->setText(QCoreApplication::translate("ResetDialog", "\351\202\256\347\256\261\357\274\232", nullptr));
        varify_lb->setText(QCoreApplication::translate("ResetDialog", "\351\252\214\350\257\201\347\240\201\357\274\232", nullptr));
        varify_btn->setText(QCoreApplication::translate("ResetDialog", "\350\216\267\345\217\226", nullptr));
        pwd_lb->setText(QCoreApplication::translate("ResetDialog", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        sure_btn->setText(QCoreApplication::translate("ResetDialog", "\347\241\256\350\256\244", nullptr));
        return_btn->setText(QCoreApplication::translate("ResetDialog", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResetDialog: public Ui_ResetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESETDIALOG_H
