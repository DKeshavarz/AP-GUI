/********************************************************************************
** Form generated from reading UI file 'windowper.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWPER_H
#define UI_WINDOWPER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WindowPer
{
public:
    QLabel *BG;
    QPushButton *settingBtn;
    QPushButton *exitBtn;
    QPushButton *deleteAccBtn;
    QPushButton *userSearchBtn;
    QPushButton *hashtagSearchBtn;
    QPushButton *addBtn;
    QPushButton *logoutBtn;
    QPlainTextEdit *tweetTxt;
    QPushButton *saveBtn;
    QPushButton *followBtn;

    void setupUi(QDialog *WindowPer)
    {
        if (WindowPer->objectName().isEmpty())
            WindowPer->setObjectName(QString::fromUtf8("WindowPer"));
        WindowPer->resize(1547, 1151);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/LogoB"), QSize(), QIcon::Normal, QIcon::Off);
        WindowPer->setWindowIcon(icon);
        BG = new QLabel(WindowPer);
        BG->setObjectName(QString::fromUtf8("BG"));
        BG->setGeometry(QRect(0, 0, 1547, 1151));
        settingBtn = new QPushButton(WindowPer);
        settingBtn->setObjectName(QString::fromUtf8("settingBtn"));
        settingBtn->setGeometry(QRect(0, 0, 60, 60));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/setting"), QSize(), QIcon::Normal, QIcon::Off);
        settingBtn->setIcon(icon1);
        settingBtn->setIconSize(QSize(60, 60));
        exitBtn = new QPushButton(WindowPer);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setGeometry(QRect(1420, 0, 131, 60));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/icons8-power-off-button-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitBtn->setIcon(icon2);
        exitBtn->setIconSize(QSize(50, 50));
        deleteAccBtn = new QPushButton(WindowPer);
        deleteAccBtn->setObjectName(QString::fromUtf8("deleteAccBtn"));
        deleteAccBtn->setGeometry(QRect(10, 1080, 351, 48));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/trash"), QSize(), QIcon::Normal, QIcon::Off);
        deleteAccBtn->setIcon(icon3);
        deleteAccBtn->setIconSize(QSize(50, 50));
        userSearchBtn = new QPushButton(WindowPer);
        userSearchBtn->setObjectName(QString::fromUtf8("userSearchBtn"));
        userSearchBtn->setGeometry(QRect(1340, 1080, 180, 48));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/icons8-america-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        userSearchBtn->setIcon(icon4);
        userSearchBtn->setIconSize(QSize(50, 50));
        hashtagSearchBtn = new QPushButton(WindowPer);
        hashtagSearchBtn->setObjectName(QString::fromUtf8("hashtagSearchBtn"));
        hashtagSearchBtn->setGeometry(QRect(1340, 1020, 180, 48));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/icons8-hashtag-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        hashtagSearchBtn->setIcon(icon5);
        hashtagSearchBtn->setIconSize(QSize(50, 50));
        addBtn = new QPushButton(WindowPer);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));
        addBtn->setGeometry(QRect(40, 160, 180, 48));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon/icons8-plus-math-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        addBtn->setIcon(icon6);
        addBtn->setIconSize(QSize(50, 50));
        logoutBtn = new QPushButton(WindowPer);
        logoutBtn->setObjectName(QString::fromUtf8("logoutBtn"));
        logoutBtn->setGeometry(QRect(10, 1020, 180, 48));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/icons8-arrow-pointing-left-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutBtn->setIcon(icon7);
        logoutBtn->setIconSize(QSize(50, 50));
        tweetTxt = new QPlainTextEdit(WindowPer);
        tweetTxt->setObjectName(QString::fromUtf8("tweetTxt"));
        tweetTxt->setGeometry(QRect(230, 160, 1291, 851));
        saveBtn = new QPushButton(WindowPer);
        saveBtn->setObjectName(QString::fromUtf8("saveBtn"));
        saveBtn->setGeometry(QRect(40, 220, 180, 48));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icon/icons8-save-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveBtn->setIcon(icon8);
        saveBtn->setIconSize(QSize(50, 50));
        followBtn = new QPushButton(WindowPer);
        followBtn->setObjectName(QString::fromUtf8("followBtn"));
        followBtn->setGeometry(QRect(1340, 100, 180, 48));

        retranslateUi(WindowPer);

        QMetaObject::connectSlotsByName(WindowPer);
    } // setupUi

    void retranslateUi(QDialog *WindowPer)
    {
        WindowPer->setWindowTitle(QCoreApplication::translate("WindowPer", "Dialog", nullptr));
        BG->setText(QString());
        settingBtn->setText(QString());
        exitBtn->setText(QCoreApplication::translate("WindowPer", "Exit", nullptr));
        deleteAccBtn->setText(QCoreApplication::translate("WindowPer", "Delete your Account", nullptr));
        userSearchBtn->setText(QCoreApplication::translate("WindowPer", "Search", nullptr));
        hashtagSearchBtn->setText(QCoreApplication::translate("WindowPer", "Search", nullptr));
        addBtn->setText(QCoreApplication::translate("WindowPer", "Add", nullptr));
        logoutBtn->setText(QCoreApplication::translate("WindowPer", "Logout", nullptr));
        saveBtn->setText(QCoreApplication::translate("WindowPer", "Save", nullptr));
        followBtn->setText(QCoreApplication::translate("WindowPer", "Follow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowPer: public Ui_WindowPer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWPER_H
