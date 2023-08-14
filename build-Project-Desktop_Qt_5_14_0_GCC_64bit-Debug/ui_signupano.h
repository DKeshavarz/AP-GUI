/********************************************************************************
** Form generated from reading UI file 'signupano.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPANO_H
#define UI_SIGNUPANO_H

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

class Ui_SignUpAno
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *usernTxt;
    QLabel *passTxt;
    QLabel *pnumTxt;
    QVBoxLayout *verticalLayout;
    QLineEdit *userTxtBar;
    QLineEdit *passTxtBar;
    QLineEdit *pnumTxtBar;
    QLabel *BG;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *cancelBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *enterBtn;

    void setupUi(QDialog *SignUpAno)
    {
        if (SignUpAno->objectName().isEmpty())
            SignUpAno->setObjectName(QString::fromUtf8("SignUpAno"));
        SignUpAno->resize(867, 411);
        layoutWidget = new QWidget(SignUpAno);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 831, 251));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
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

        BG = new QLabel(SignUpAno);
        BG->setObjectName(QString::fromUtf8("BG"));
        BG->setGeometry(QRect(-10, 10, 921, 331));
        widget = new QWidget(SignUpAno);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 350, 841, 50));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        cancelBtn = new QPushButton(widget);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));

        horizontalLayout_2->addWidget(cancelBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        enterBtn = new QPushButton(widget);
        enterBtn->setObjectName(QString::fromUtf8("enterBtn"));

        horizontalLayout_2->addWidget(enterBtn);

        cancelBtn->raise();
        enterBtn->raise();
        BG->raise();
        layoutWidget->raise();
        enterBtn->raise();
        cancelBtn->raise();

        retranslateUi(SignUpAno);

        QMetaObject::connectSlotsByName(SignUpAno);
    } // setupUi

    void retranslateUi(QDialog *SignUpAno)
    {
        SignUpAno->setWindowTitle(QCoreApplication::translate("SignUpAno", "Dialog", nullptr));
        usernTxt->setText(QCoreApplication::translate("SignUpAno", "Username", nullptr));
        passTxt->setText(QCoreApplication::translate("SignUpAno", "Password", nullptr));
        pnumTxt->setText(QCoreApplication::translate("SignUpAno", "Phone number", nullptr));
        BG->setText(QString());
        cancelBtn->setText(QCoreApplication::translate("SignUpAno", "Cancel", nullptr));
        enterBtn->setText(QCoreApplication::translate("SignUpAno", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpAno: public Ui_SignUpAno {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPANO_H
