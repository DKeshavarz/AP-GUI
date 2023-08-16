#include "windowper.h"
#include "ui_windowper.h"

#include "editaccount.h"
#include "mainwindow.h"
#include "search.h"

#include <QPixmap>

WindowPer::WindowPer(QWidget *parent,Twitterak* ptr) :
    QDialog(parent),
    ui(new Ui::WindowPer),
    appPtr(ptr)
{
    ui->setupUi(this);

    QPixmap pix(":/img/BG2.jpeg");
    ui -> BG -> setPixmap(pix.scaled(this -> width() , this -> height()));

    ui -> tweetTxt   -> setEnabled(false);

    //enable bottuns for user per and org
    if (main.flagO || main.flagP)
    {
        ui -> addBtn   -> setEnabled(true);
        ui -> saveBtn  -> setEnabled(true);
    }
}

WindowPer::~WindowPer()
{
    delete ui;
}

void WindowPer::on_settingBtn_clicked()
{
    EditAccount op(this,appPtr);
    op.setWindowTitle("Account");
    op.setModal(true);
    op.exec();
}


void WindowPer::on_exitBtn_clicked()
{
    QApplication :: quit();
}

void WindowPer::on_logoutBtn_clicked()
{
    this -> hide();

    MainWindow w;
    w.setWindowTitle("Twitterak(LA)");
    w.show();
}

void WindowPer::on_addBtn_clicked()
{
    ui->tweetTxt->setEnabled(true);
    ui->tweetTxt->setPlainText("");
}


void WindowPer::on_saveBtn_clicked()
{
    ui->tweetTxt->setEnabled(false);
    std::string tweetText = ui->tweetTxt->toPlainText().toStdString();

    appPtr->addTweet(tweetText);
}

void WindowPer::on_userSearchBtn_clicked()
{
    Search op;
    op.setModal(true);
    op.setWindowTitle("Search");
    op.exec();

}

void WindowPer::on_deleteAccBtn_clicked()
{
    std::string userName = appPtr->getMainUser()->getUserName();

    appPtr->deleteUser(userName);

    close();
}

