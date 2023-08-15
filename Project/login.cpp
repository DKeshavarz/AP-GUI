#include "login.h"
#include "ui_login.h"

#include "windowper.h"

#include <QPixmap>

//logic
#include <QString>
#include <QMessageBox>
#include <stdexcept>

Login::Login(QWidget *parent,Twitterak* ptr) :
    QDialog(parent),
    ui(new Ui::Login),
    appPtr(ptr)
{
    ui->setupUi(this);

    QPixmap pix(":/img/BG1.jpeg");
    ui -> BG -> setPixmap(pix.scaled(this -> width() , this -> height()));
}

Login::~Login()
{
    delete ui;
}

void Login::on_enterBtn_clicked()
{
    QString userName = ui -> usernameTxtBar->text();
    QString password = ui -> passwordTxtBar->text();

    try
    {
        appPtr->loadMainUser(userName.toStdString(),password.toStdString());
        WindowPer op(this,appPtr);
        this -> hide();
        op.setWindowTitle("Main App");
        op.setModal(true);
        op.exec();
    }
    catch (std::invalid_argument& err)
    {
        QMessageBox::warning(this,"error",QString::fromStdString(err.what()));
    }
}
