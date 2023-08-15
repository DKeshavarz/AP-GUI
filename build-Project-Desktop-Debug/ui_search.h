/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Search
{
public:
    QLabel *BG;
    QPushButton *searchBtn;
    QLineEdit *searchTxtBar;

    void setupUi(QDialog *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName(QString::fromUtf8("Search"));
        Search->resize(740, 248);
        BG = new QLabel(Search);
        BG->setObjectName(QString::fromUtf8("BG"));
        BG->setGeometry(QRect(0, 0, 740, 248));
        searchBtn = new QPushButton(Search);
        searchBtn->setObjectName(QString::fromUtf8("searchBtn"));
        searchBtn->setGeometry(QRect(550, 180, 180, 48));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/icons8-america-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchBtn->setIcon(icon);
        searchBtn->setIconSize(QSize(40, 40));
        searchTxtBar = new QLineEdit(Search);
        searchTxtBar->setObjectName(QString::fromUtf8("searchTxtBar"));
        searchTxtBar->setGeometry(QRect(10, 90, 721, 51));

        retranslateUi(Search);

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QDialog *Search)
    {
        Search->setWindowTitle(QCoreApplication::translate("Search", "Dialog", nullptr));
        BG->setText(QString());
        searchBtn->setText(QCoreApplication::translate("Search", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
