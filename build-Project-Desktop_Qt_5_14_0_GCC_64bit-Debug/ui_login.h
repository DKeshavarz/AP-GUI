/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *BG;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *uTxt;
    QLineEdit *usernameTxtBar;
    QLabel *pTxt;
    QLineEdit *passwordTxtBar;
    QPushButton *enterBtn;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->setEnabled(true);
        Login->resize(722, 423);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/LogoB"), QSize(), QIcon::Normal, QIcon::Off);
        Login->setWindowIcon(icon);
        Login->setStyleSheet(QString::fromUtf8("rgb (53, 132, 228);"));
        BG = new QLabel(Login);
        BG->setObjectName(QString::fromUtf8("BG"));
        BG->setGeometry(QRect(0, 0, 722, 423));
        layoutWidget = new QWidget(Login);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 70, 541, 191));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        uTxt = new QLabel(layoutWidget);
        uTxt->setObjectName(QString::fromUtf8("uTxt"));

        gridLayout->addWidget(uTxt, 0, 0, 1, 1);

        usernameTxtBar = new QLineEdit(layoutWidget);
        usernameTxtBar->setObjectName(QString::fromUtf8("usernameTxtBar"));
        usernameTxtBar->setEnabled(true);

        gridLayout->addWidget(usernameTxtBar, 0, 1, 1, 1);

        pTxt = new QLabel(layoutWidget);
        pTxt->setObjectName(QString::fromUtf8("pTxt"));

        gridLayout->addWidget(pTxt, 1, 0, 1, 1);

        passwordTxtBar = new QLineEdit(layoutWidget);
        passwordTxtBar->setObjectName(QString::fromUtf8("passwordTxtBar"));
        passwordTxtBar->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordTxtBar, 1, 1, 1, 1);

        enterBtn = new QPushButton(Login);
        enterBtn->setObjectName(QString::fromUtf8("enterBtn"));
        enterBtn->setGeometry(QRect(541, 350, 151, 48));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        BG->setText(QString());
        uTxt->setText(QCoreApplication::translate("Login", "<font color = white>Username", nullptr));
        pTxt->setText(QCoreApplication::translate("Login", "<font color = white>Password", nullptr));
        enterBtn->setText(QCoreApplication::translate("Login", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
