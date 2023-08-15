include "signupano.h"
#include "ui_signupano.h"

#include "checkaccounttype.h"

#include <QPixmap>

SignUpAno::SignUpAno(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUpAno)
{
    ui->setupUi(this);

    QPixmap pix(":/img/BG1.jpeg");
    ui -> BG -> setPixmap(pix.scaled(this -> width() , this -> height()));
}

SignUpAno::~SignUpAno()
{
    delete ui;
}


void SignUpAno::on_cancelBtn_clicked()
{
    this -> hide();

    CheckAccountType op;
    op.setModal(true);
    op.setWindowTitle("Account type");
    op.exec();
}
