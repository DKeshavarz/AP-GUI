#include "useracount.h"
#include "ui_useracount.h"

UserAcount::UserAcount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserAcount)
{
    ui->setupUi(this);
}

UserAcount::~UserAcount()
{
    delete ui;
}
