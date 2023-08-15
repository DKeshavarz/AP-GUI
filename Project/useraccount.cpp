#include "useraccount.h"
#include "ui_useraccount.h"

#include "search.h"

#include <QPixmap>

UserAccount::UserAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserAccount)
{
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
    this -> close(); // ->hide()

    Search op;
    op.setWindowTitle("Search");
    op.setModal(true);
    op.exec();

}
