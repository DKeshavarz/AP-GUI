#include "checkaccounttype.h"
#include "ui_checkaccounttype.h"

#include "signuporg.h"
#include "signupper.h"
#include "signupano.h"

#include <QPixmap>

CheckAccountType::CheckAccountType(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckAccountType)
{
    ui->setupUi(this);

    QPixmap pix(":/img/BG.jpg");
    ui -> BG -> setPixmap(pix.scaled(this -> width() , this -> height()));
}

CheckAccountType::~CheckAccountType()
{
    delete ui;
}

void CheckAccountType::on_enterBtn_clicked()
{
    if (ui -> orgRbtn -> isChecked())
    {
        SignUpOrg op;
        op.setModal(true);
        this -> hide();
        op.setWindowTitle("Signup (org)");
        op.exec();
    }

    else if (ui -> perRbtn -> isChecked())
    {
        SignUpPer op;
        op.setModal(true);
        this -> hide();
        op.setWindowTitle("Signup (per)");
        op.exec();
    }

    else if (ui -> anoRbtn -> isChecked())
    {
        SignUpAno op;
        op.setModal(true);
        this -> hide();
        op.setWindowTitle("Signup (ano)");
        op.exec();
    }

}
