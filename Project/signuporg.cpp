#include "signuporg.h"
#include "ui_signuporg.h"

#include "checkaccounttype.h"

#include <QPixmap>

SignUpOrg::SignUpOrg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUpOrg)
{
    ui->setupUi(this);

    QPixmap pix(":/img/BG1.jpeg");
    ui -> BG -> setPixmap(pix.scaled(this -> width() , this -> height()));
}

SignUpOrg::~SignUpOrg()
{
    delete ui;
}

void SignUpOrg::on_cancelBtn_clicked()
{
    this -> hide();

    CheckAccountType op;
    op.setModal(true);
    op.setWindowTitle("Account type");
    op.exec();

}
