/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *BG;
    QLabel *Logo;
    QPushButton *exitBtn;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *loginBtn;
    QPushButton *signupBtn;
    QPushButton *helpBtn;
    QPushButton *aboutBtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(601, 994);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/LogoW"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("url (:/img/BG.jpg)"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        BG = new QLabel(centralwidget);
        BG->setObjectName(QString::fromUtf8("BG"));
        BG->setGeometry(QRect(0, -40, 601, 994));
        Logo = new QLabel(centralwidget);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setGeometry(QRect(160, 110, 271, 251));
        Logo->setStyleSheet(QString::fromUtf8("url (:/img/LogoB);"));
        exitBtn = new QPushButton(centralwidget);
        exitBtn->setObjectName(QString::fromUtf8("exitBtn"));
        exitBtn->setGeometry(QRect(0, 0, 151, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/icons8-power-off-button-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitBtn->setIcon(icon1);
        exitBtn->setIconSize(QSize(40, 40));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 380, 411, 491));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        loginBtn = new QPushButton(layoutWidget);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/login"), QSize(), QIcon::Normal, QIcon::Off);
        loginBtn->setIcon(icon2);
        loginBtn->setIconSize(QSize(50, 50));

        verticalLayout->addWidget(loginBtn);

        signupBtn = new QPushButton(layoutWidget);
        signupBtn->setObjectName(QString::fromUtf8("signupBtn"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/mUser"), QSize(), QIcon::Normal, QIcon::Off);
        signupBtn->setIcon(icon3);
        signupBtn->setIconSize(QSize(50, 50));

        verticalLayout->addWidget(signupBtn);

        helpBtn = new QPushButton(layoutWidget);
        helpBtn->setObjectName(QString::fromUtf8("helpBtn"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/icons8-speech-bubble-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        helpBtn->setIcon(icon4);
        helpBtn->setIconSize(QSize(50, 50));

        verticalLayout->addWidget(helpBtn);

        aboutBtn = new QPushButton(layoutWidget);
        aboutBtn->setObjectName(QString::fromUtf8("aboutBtn"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/about"), QSize(), QIcon::Normal, QIcon::Off);
        aboutBtn->setIcon(icon5);
        aboutBtn->setIconSize(QSize(50, 50));

        verticalLayout->addWidget(aboutBtn);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 601, 39));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        BG->setText(QString());
        Logo->setText(QString());
        exitBtn->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        loginBtn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        signupBtn->setText(QCoreApplication::translate("MainWindow", "SignUp", nullptr));
        helpBtn->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        aboutBtn->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
