/********************************************************************************
** Form generated from reading UI file 'checkaccounttype.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKACCOUNTTYPE_H
#define UI_CHECKACCOUNTTYPE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheckAccountType
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *orgRbtn;
    QRadioButton *perRbtn;
    QRadioButton *anoRbtn;
    QLabel *BG;
    QPushButton *enterBtn;

    void setupUi(QDialog *CheckAccountType)
    {
        if (CheckAccountType->objectName().isEmpty())
            CheckAccountType->setObjectName(QString::fromUtf8("CheckAccountType"));
        CheckAccountType->resize(425, 350);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/LogoW"), QSize(), QIcon::Normal, QIcon::Off);
        CheckAccountType->setWindowIcon(icon);
        CheckAccountType->setStyleSheet(QString::fromUtf8("url (:/img/BG.jpg)"));
        label = new QLabel(CheckAccountType);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 431, 81));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Dyuthi\";"));
        layoutWidget = new QWidget(CheckAccountType);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 90, 371, 181));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        orgRbtn = new QRadioButton(layoutWidget);
        orgRbtn->setObjectName(QString::fromUtf8("orgRbtn"));

        verticalLayout->addWidget(orgRbtn);

        perRbtn = new QRadioButton(layoutWidget);
        perRbtn->setObjectName(QString::fromUtf8("perRbtn"));

        verticalLayout->addWidget(perRbtn);

        anoRbtn = new QRadioButton(layoutWidget);
        anoRbtn->setObjectName(QString::fromUtf8("anoRbtn"));

        verticalLayout->addWidget(anoRbtn);

        BG = new QLabel(CheckAccountType);
        BG->setObjectName(QString::fromUtf8("BG"));
        BG->setGeometry(QRect(8, 10, 411, 331));
        enterBtn = new QPushButton(CheckAccountType);
        enterBtn->setObjectName(QString::fromUtf8("enterBtn"));
        enterBtn->setGeometry(QRect(220, 280, 180, 48));
        BG->raise();
        label->raise();
        layoutWidget->raise();
        enterBtn->raise();

        retranslateUi(CheckAccountType);

        QMetaObject::connectSlotsByName(CheckAccountType);
    } // setupUi

    void retranslateUi(QDialog *CheckAccountType)
    {
        CheckAccountType->setWindowTitle(QCoreApplication::translate("CheckAccountType", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CheckAccountType", "Which Account you want?", nullptr));
        orgRbtn->setText(QCoreApplication::translate("CheckAccountType", "\342\200\253\342\200\252Organisation\342\200\254\342\200\254", nullptr));
        perRbtn->setText(QCoreApplication::translate("CheckAccountType", "\342\200\253\342\200\252Personal\342\200\254\342\200\254", nullptr));
        anoRbtn->setText(QCoreApplication::translate("CheckAccountType", "\342\200\253\342\200\252Anonymous\342\200\254\342\200\254", nullptr));
        BG->setText(QString());
        enterBtn->setText(QCoreApplication::translate("CheckAccountType", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckAccountType: public Ui_CheckAccountType {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKACCOUNTTYPE_H
