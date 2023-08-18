#include "useraccount.h"
#include "ui_useraccount.h"

#include "search.h"

#include <QPixmap>

//logic
#include <QMessageBox>
#include <iostream>

UserAccount::UserAccount(QWidget *parent,Twitterak* ptr) :
    QDialog(parent),
    ui(new Ui::UserAccount),
    appPtr(ptr)
{
    if(appPtr == nullptr)std::cerr << "UserAccount::UserAccount-> ptr is empty\n";
    ui->setupUi(this);

    QPixmap pix(":/img/BG2.jpeg");
    ui -> BG -> setPixmap(pix.scaled(this -> width() , this -> height()));
}

UserAccount::~UserAccount()
{
    delete ui;
}

void UserAccount::on_settingBtn_clicked()
{
    op = new EditAccount(this);
    op->setWindowTitle("User information");
    op->show();
}

void UserAccount::on_exitBtn_clicked()
{
    QApplication :: quit();
}

void UserAccount::on_userSearchBtn_clicked()
{
    if(appPtr == nullptr)std::cerr << "UserAccount::on_userSearchBtn_clicked-> ptr is empty\n";
    Search op(this,appPtr);
    this -> close(); // ->hide()
    op.setWindowTitle("Search");
    op.setModal(true);
    op.exec();
}
void UserAccount::showTweet()
{
    ui->nextBtn->setEnabled(appPtr->getMainUser()->canShowNextTweet());
    ui->preBtn ->setEnabled(appPtr->getMainUser()->canShowLastTweet());

    try
    {
        std::string tweetStr = appPtr->getMainUser()->getTweet()->getTweetStr();
        ui->tweetTxt->setPlainText(QString::fromStdString(tweetStr));
    }
    catch (std::invalid_argument& err)
    {
        QMessageBox::warning(this,"eror",QString::fromStdString(err.what()));
        ui->tweetTxt->setPlainText("There is no tweet yet :)");
    }
}
void UserAccount::on_nextBtn_clicked()
{
    try
    {
        appPtr->getMainUser()->goToNextTweet();
        showTweet();
    }
    catch(std::out_of_range& err)
    {
        QMessageBox::warning(this,"eror",QString::fromStdString(err.what()));
    }
}


void UserAccount::on_preBtn_clicked()
{
    try
    {
        appPtr->getMainUser()->goToNextTweet();
        showTweet();
    }
    catch(std::out_of_range& err)
    {
        QMessageBox::warning(this,"eror",QString::fromStdString(err.what()));
    }
}

