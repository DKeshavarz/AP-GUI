#include "signupper.h"
#include "ui_signupper.h"

#include "checkaccounttype.h"

#include <QPixmap>

SignUpPer::SignUpPer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUpPer)
{
    ui->setupUi(this);

    QPixmap pix(":/img/BG1.jpeg");
    ui -> BG -> setPixmap(pix.scaled(this -> width() , this -> height()));
}

SignUpPer::~SignUpPer()
{
    delete ui;
}

void SignUpPer::on_enterBtn_clicked()
{
    // if it is valid go to app page
}

void SignUpPer::on_cancelBtn_clicked()
{
    this -> hide();

    CheckAccountType op;
    op.setModal(true);
    op.setWindowTitle("Account type");
    op.exec();

}
