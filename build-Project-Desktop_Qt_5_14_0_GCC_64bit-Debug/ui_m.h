/********************************************************************************
** Form generated from reading UI file 'm.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_M_H
#define UI_M_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_m
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *m)
    {
        if (m->objectName().isEmpty())
            m->setObjectName(QString::fromUtf8("m"));
        m->resize(1728, 1138);
        centralwidget = new QWidget(m);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        m->setCentralWidget(centralwidget);
        menubar = new QMenuBar(m);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1728, 39));
        m->setMenuBar(menubar);
        statusbar = new QStatusBar(m);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        m->setStatusBar(statusbar);

        retranslateUi(m);

        QMetaObject::connectSlotsByName(m);
    } // setupUi

    void retranslateUi(QMainWindow *m)
    {
        m->setWindowTitle(QCoreApplication::translate("m", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class m: public Ui_m {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_M_H
