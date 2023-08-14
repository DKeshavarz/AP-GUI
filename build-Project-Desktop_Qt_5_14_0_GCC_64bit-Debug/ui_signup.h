/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QLabel *BG;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *nameTxt;
    QLabel *usernTxt_2;
    QLabel *usernmTxt;
    QLabel *passTxt_2;
    QLabel *pnumTxt_2;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *nameTxtBar;
    QLineEdit *userTxtBar;
    QLineEdit *MuserTxtBar;
    QLineEdit *passTxtBar;
    QLineEdit *pnumTxtBar;
    QLabel *label;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *orgRbtn;
    QRadioButton *perRbtn;
    QRadioButton *anoRbtn;
    QPushButton *pushButton;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QString::fromUtf8("SignUp"));
        SignUp->resize(906, 790);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/LogoB"), QSize(), QIcon::Normal, QIcon::Off);
        SignUp->setWindowIcon(icon);
        BG = new QLabel(SignUp);
        BG->setObjectName(QString::fromUtf8("BG"));
        BG->setGeometry(QRect(0, 0, 906, 790));
        layoutWidget_2 = new QWidget(SignUp);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 280, 881, 421));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        nameTxt = new QLabel(layoutWidget_2);
        nameTxt->setObjectName(QString::fromUtf8("nameTxt"));

        verticalLayout_3->addWidget(nameTxt);

        usernTxt_2 = new QLabel(layoutWidget_2);
        usernTxt_2->setObjectName(QString::fromUtf8("usernTxt_2"));

        verticalLayout_3->addWidget(usernTxt_2);

        usernmTxt = new QLabel(layoutWidget_2);
        usernmTxt->setObjectName(QString::fromUtf8("usernmTxt"));

        verticalLayout_3->addWidget(usernmTxt);

        passTxt_2 = new QLabel(layoutWidget_2);
        passTxt_2->setObjectName(QString::fromUtf8("passTxt_2"));

        verticalLayout_3->addWidget(passTxt_2);

        pnumTxt_2 = new QLabel(layoutWidget_2);
        pnumTxt_2->setObjectName(QString::fromUtf8("pnumTxt_2"));

        verticalLayout_3->addWidget(pnumTxt_2);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        nameTxtBar = new QLineEdit(layoutWidget_2);
        nameTxtBar->setObjectName(QString::fromUtf8("nameTxtBar"));

        verticalLayout_4->addWidget(nameTxtBar);

        userTxtBar = new QLineEdit(layoutWidget_2);
        userTxtBar->setObjectName(QString::fromUtf8("userTxtBar"));

        verticalLayout_4->addWidget(userTxtBar);

        MuserTxtBar = new QLineEdit(layoutWidget_2);
        MuserTxtBar->setObjectName(QString::fromUtf8("MuserTxtBar"));

        verticalLayout_4->addWidget(MuserTxtBar);

        passTxtBar = new QLineEdit(layoutWidget_2);
        passTxtBar->setObjectName(QString::fromUtf8("passTxtBar"));
        passTxtBar->setEchoMode(QLineEdit::Password);

        verticalLayout_4->addWidget(passTxtBar);

        pnumTxtBar = new QLineEdit(layoutWidget_2);
        pnumTxtBar->setObjectName(QString::fromUtf8("pnumTxtBar"));

        verticalLayout_4->addWidget(pnumTxtBar);


        horizontalLayout_2->addLayout(verticalLayout_4);

        label = new QLabel(SignUp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 431, 81));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Dyuthi\";"));
        layoutWidget_4 = new QWidget(SignUp);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 90, 542, 181));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        orgRbtn = new QRadioButton(layoutWidget_4);
        orgRbtn->setObjectName(QString::fromUtf8("orgRbtn"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/icons8-administrator-male-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        orgRbtn->setIcon(icon1);
        orgRbtn->setIconSize(QSize(40, 40));

        verticalLayout_7->addWidget(orgRbtn);

        perRbtn = new QRadioButton(layoutWidget_4);
        perRbtn->setObjectName(QString::fromUtf8("perRbtn"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/icons8-user-account-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        perRbtn->setIcon(icon2);
        perRbtn->setIconSize(QSize(40, 40));

        verticalLayout_7->addWidget(perRbtn);

        anoRbtn = new QRadioButton(layoutWidget_4);
        anoRbtn->setObjectName(QString::fromUtf8("anoRbtn"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/icons8-robber-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        anoRbtn->setIcon(icon3);
        anoRbtn->setIconSize(QSize(40, 40));

        verticalLayout_7->addWidget(anoRbtn);

        pushButton = new QPushButton(SignUp);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(710, 720, 180, 48));

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "Dialog", nullptr));
        BG->setText(QString());
        nameTxt->setText(QCoreApplication::translate("SignUp", "<font color = white>Name", nullptr));
        usernTxt_2->setText(QCoreApplication::translate("SignUp", "<font color = white>Username", nullptr));
        usernmTxt->setText(QCoreApplication::translate("SignUp", "<font color = white>Manager username", nullptr));
        passTxt_2->setText(QCoreApplication::translate("SignUp", "<font color = white>Password", nullptr));
        pnumTxt_2->setText(QCoreApplication::translate("SignUp", "<font color = white>Phone number", nullptr));
        label->setText(QCoreApplication::translate("SignUp", "<font color = white>Which Account you want?", nullptr));
        orgRbtn->setText(QCoreApplication::translate("SignUp", "\342\200\253\342\200\252Organisation\342\200\254\342\200\254", nullptr));
        perRbtn->setText(QCoreApplication::translate("SignUp", "\342\200\253\342\200\252Personal\342\200\254\342\200\254", nullptr));
        anoRbtn->setText(QCoreApplication::translate("SignUp", "\342\200\253\342\200\252Anonymous\342\200\254\342\200\254", nullptr));
        pushButton->setText(QCoreApplication::translate("SignUp", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
