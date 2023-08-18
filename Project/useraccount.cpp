#include "useraccount.h"
#include "ui_useraccount.h"

#include "search.h"

#include <QPixmap>

//logic
#include <QMessageBox>
#include <iostream>
#include <QString>

UserAccount::UserAccount(QWidget *parent,Twitterak* ptr) :
    QDialog(parent),
    ui(new Ui::UserAccount),
    appPtr(ptr)
{
    std::cerr <<"UserAccount::UserAccount->start nigga\n";

    ui->setupUi(this);
    QPixmap pix(":/img/BG2.jpeg");
    ui -> BG -> setPixmap(pix.scaled(this -> width() , this -> height()));
    ui->tweetTxt->setEnabled(false);
    showTweet();
    setLikes();
    checkBtnFollow();
    if (ptr->getTempUser()->getAllTweets() == 1)
    {
        ui->likeBtn   ->setEnabled(false);
        ui->mentionBtn->setEnabled(false);
    }
}
UserAccount::~UserAccount()
{
    std::cerr <<"UserAccount::~UserAccount->start\n";
    delete ui;
}
void UserAccount::checkBtnFollow()
{
    QString btnFollowText = appPtr->isFollow()? "unfollow" : "follow" ;
    ui->followBtn->setText(btnFollowText);
}
void UserAccount::on_settingBtn_clicked()
{
    op = new EditAccount(this,appPtr);
    op->setWindowTitle("User information");
    op->show();
}
void UserAccount::on_exitBtn_clicked()
{
    QApplication :: quit();
}
void UserAccount::on_userSearchBtn_clicked()
{
    Search op(this,appPtr);
    this -> close(); // ->hide()
    op.setWindowTitle("Search");
    op.setModal(true);
    op.exec();
}
void UserAccount::showTweet()
{
    ui->nextBtn->setEnabled(appPtr->getTempUser()->canShowNextTweet());
    ui->preBtn ->setEnabled(appPtr->getTempUser()->canShowLastTweet());

    try
    {
        std::string tweetStr = appPtr->getTempUser()->getTweet()->getTweetStr();
        ui->tweetTxt->setPlainText(QString::fromStdString(tweetStr));
    }
    catch (std::invalid_argument& err)
    {
        ui->tweetTxt->setPlainText("There is no tweet yet :)");
    }
}
void UserAccount::on_nextBtn_clicked()
{
    try
    {
        appPtr->getTempUser()->goToNextTweet();
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
        appPtr->getTempUser()->goToLastTweet();
        showTweet();
    }
    catch(std::out_of_range& err)
    {
        QMessageBox::warning(this,"eror",QString::fromStdString(err.what()));
    }
}


void UserAccount::on_followBtn_clicked()
{
    appPtr->follow();
    checkBtnFollow();
}


void UserAccount::on_likeBtn_clicked()
{
    appPtr->like();
    setLikes();
}
void UserAccount::setLikes()
{
    try
    {
        int likesNum = appPtr->getTempUser()->getTweet()->getLikeNum();
        ui->likeTxt->setText("Likes" + QString::number(likesNum));
    }
    catch (...)
    {
        std::cerr << "UserAccount::setLikes\n" ;
    }


}
