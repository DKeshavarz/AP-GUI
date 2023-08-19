#include "search.h"
#include "ui_search.h"

#include "useraccount.h"

#include <QPixmap>

//logic
#include <QMessageBox>
#include <iostream>

Search::Search(QWidget *parent,Twitterak* ptr) :
    QDialog(parent),
    ui(new Ui::Search),
    appPtr(ptr)
{
    if(appPtr == nullptr)std::cerr << "Search::Search-> ptr is empty\n";
    ui->setupUi(this);

    QPixmap pix(":/img/BG1.jpeg");
    ui -> BG -> setPixmap(pix.scaled(this -> width() , this -> height()));

}

Search::~Search()
{
    delete ui;
}

void Search::on_searchBtn_clicked()
{
    try
    {
        std::string userName {ui->searchTxtBar->text().toStdString()};
        if(appPtr == nullptr) std::cerr << "Search::on_searchBtn_clicked->app ptr is empty\n";
        appPtr->loadTempUser(userName);
        this -> close();
        std::cerr << "Search::on_searchBtn_clicked->creat test\n";

        UserAccount test(this,appPtr);
        test.setModal(true);
        test.exec();

    }
    catch (std::invalid_argument& err)
    {
        QMessageBox::warning(this,"eror",QString::fromStdString(err.what()));
    }
    catch(...)
    {
        QMessageBox::warning(this,"eror","wtffff");
    }
}
