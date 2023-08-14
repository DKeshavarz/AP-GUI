/********************************************************************************
** Form generated from reading UI file 'signupper.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPPER_H
#define UI_SIGNUPPER_H

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

QT_BEGIN_NAMESPACE

class Ui_SignUpPer
{
public:
    QLabel *BG;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *nameTxt;
    QLabel *usernTxt;
    QLabel *passTxt;
    QLabel *pnumTxt;
    QVBoxLayout *verticalLayout;
    QLineEdit *nameTxtBar;
    QLineEdit *userTxtBar;
    QLineEdit *passTxtBar;
    QLineEdit *pnumTxtBar;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *cancelBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *enterBtn;

    void setupUi(QDialog *SignUpPer)
    {
        if (SignUpPer->objectName().isEmpty())
            SignUpPer->setObjectName(QString::fromUtf8("SignUpPer"));
        SignUpPer->resize(861, 519);
        BG = new QLabel(SignUpPer);
        BG->setObjectName(QString::fromUtf8("BG"));
        BG->setGeometry(QRect(0, 0, 881, 551));
        layoutWidget = new QWidget(SignUpPer);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 831, 421));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        nameTxt = new QLabel(layoutWidget);
        nameTxt->setObjectName(QString::fromUtf8("nameTxt"));

        verticalLayout_2->addWidget(nameTxt);

        usernTxt = new QLabel(layoutWidget);
        usernTxt->setObjectName(QString::fromUtf8("usernTxt"));

        verticalLayout_2->addWidget(usernTxt);

        passTxt = new QLabel(layoutWidget);
        passTxt->setObjectName(QString::fromUtf8("passTxt"));

        verticalLayout_2->addWidget(passTxt);

        pnumTxt = new QLabel(layoutWidget);
        pnumTxt->setObjectName(QString::fromUtf8("pnumTxt"));

        verticalLayout_2->addWidget(pnumTxt);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        nameTxtBar = new QLineEdit(layoutWidget);
        nameTxtBar->setObjectName(QString::fromUtf8("nameTxtBar"));

        verticalLayout->addWidget(nameTxtBar);

        userTxtBar = new QLineEdit(layoutWidget);
        userTxtBar->setObjectName(QString::fromUtf8("userTxtBar"));

        verticalLayout->addWidget(userTxtBar);

        passTxtBar = new QLineEdit(layoutWidget);
        passTxtBar->setObjectName(QString::fromUtf8("passTxtBar"));
        passTxtBar->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passTxtBar);

        pnumTxtBar = new QLineEdit(layoutWidget);
        pnumTxtBar->setObjectName(QString::fromUtf8("pnumTxtBar"));

        verticalLayout->addWidget(pnumTxtBar);


        horizontalLayout->addLayout(verticalLayout);

        layoutWidget_2 = new QWidget(SignUpPer);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 450, 831, 50));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        cancelBtn = new QPushButton(layoutWidget_2);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));

        horizontalLayout_2->addWidget(cancelBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        enterBtn = new QPushButton(layoutWidget_2);
        enterBtn->setObjectName(QString::fromUtf8("enterBtn"));

        horizontalLayout_2->addWidget(enterBtn);


        retranslateUi(SignUpPer);

        QMetaObject::connectSlotsByName(SignUpPer);
    } // setupUi

    void retranslateUi(QDialog *SignUpPer)
    {
        SignUpPer->setWindowTitle(QCoreApplication::translate("SignUpPer", "Dialog", nullptr));
        BG->setText(QString());
        nameTxt->setText(QCoreApplication::translate("SignUpPer", "Name", nullptr));
        usernTxt->setText(QCoreApplication::translate("SignUpPer", "Username", nullptr));
        passTxt->setText(QCoreApplication::translate("SignUpPer", "Password", nullptr));
        pnumTxt->setText(QCoreApplication::translate("SignUpPer", "Phone number", nullptr));
        cancelBtn->setText(QCoreApplication::translate("SignUpPer", "Cancel", nullptr));
        enterBtn->setText(QCoreApplication::translate("SignUpPer", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpPer: public Ui_SignUpPer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPPER_H
