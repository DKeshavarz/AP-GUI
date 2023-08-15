#include "signup.h"
#include "ui_signup.h"

#include "windowper.h"

#include <QWidget>
#include <QPixmap>
//logic
#include <iostream>
#include <stdexcept>
#include <QMessageBox>

SignUp::SignUp(QWidget *parent,Twitterak* ptr) :
    QDialog(parent),
    ui(new Ui::SignUp),
    appPtr(ptr),
    selectedType('?')
{
    ui->setupUi(this);

    QPixmap pix(":/img/BG1.jpeg");
    ui -> BG -> setPixmap(pix.scaled(this -> width() , this -> height()));

    ui ->nameTxtBar->setEnabled (false);
    ui ->MuserTxtBar->setEnabled(false);
    ui ->passTxtBar->setEnabled (false);
    ui ->userTxtBar->setEnabled (false);
    ui ->pnumTxtBar->setEnabled (false);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_orgRbtn_clicked()
{
    main.flagO = true;
    main.flagP = false;
    main.flagA = false;
    ui -> nameTxtBar -> setText("‬‬");

    ui ->nameTxtBar->setEnabled (true);
    ui ->MuserTxtBar->setEnabled(true);
    ui ->passTxtBar->setEnabled (true);
    ui ->userTxtBar->setEnabled (true);
    ui ->pnumTxtBar->setEnabled (true);

    //logic
    selectedType = 'o';
}

void SignUp::on_perRbtn_clicked()
{
    main.flagO = false;
    main.flagP = true;
    main.flagA = false;
    ui -> nameTxtBar -> setText("‫‬‬");

    ui ->nameTxtBar->setEnabled(true);
    ui ->MuserTxtBar->setEnabled(false);
    ui ->passTxtBar->setEnabled(true);
    ui ->userTxtBar->setEnabled(true);
    ui ->pnumTxtBar->setEnabled(true);

    //logic
    selectedType = 'p';
}

void SignUp::on_anoRbtn_clicked()
{
    main.flagO = false;
    main.flagP = false;
    main.flagA = true;

    ui -> nameTxtBar -> setText("‫‪‬‬‫‪Anonymous User‬‬");

    ui ->nameTxtBar->setEnabled(false);
    ui ->MuserTxtBar->setEnabled(false);
    ui ->passTxtBar->setEnabled(true);
    ui ->userTxtBar->setEnabled(true);
    ui ->pnumTxtBar->setEnabled(false);

    //logic
    selectedType = 'a';
}

void SignUp::on_pushButton_clicked()
{
    QString name     = ui ->nameTxtBar->text();
    QString userName = ui ->userTxtBar->text();
    QString password = ui ->passTxtBar->text();
    QString phone    = ui ->pnumTxtBar->text();
    QString manager  = ui ->MuserTxtBar->text();

    try
    {
        appPtr->setMainUser(name.toStdString() ,userName.toStdString(),password.toStdString()
                            ,manager.toStdString() ,phone.toStdString() ,selectedType );

        WindowPer op(this,appPtr);
        this -> hide();
        op.setModal(true);
        op.exec();
    }
    catch (std::invalid_argument& err)
    {
        QMessageBox::warning(this,"error",QString::fromStdString(err.what()));
    }


}
