#include "editaccount.h"
#include "ui_editaccount.h"

#include <QColorDialog>
#include <QColor>
#include <QPixmap>
#include <QFileDialog>
#include <iostream>

EditAccount::EditAccount(QWidget *parent,Twitterak* ptr, bool myPage) :
    QDialog(parent),
    ui(new Ui::EditAccount),
    appPtr(ptr)
{
    ui->setupUi(this);
    QPixmap pix(":/img/BG.jpg");
    ui -> BG -> setPixmap(pix.scaled(this -> width() , this -> height()));


    BaseUser* pageOwner {nullptr};
    if(myPage)
    {
        pageOwner = appPtr->getMainUser();
    }
    else
    {
        pageOwner = appPtr->getTempUser();
    }

    ui -> nameTxtBar     -> setText(QString::fromStdString(pageOwner->getFirstName()));
    ui -> usernameTxtBar -> setText(QString::fromStdString(pageOwner->getUserName()) );
    ui -> passwordTxtBar -> setText(QString::fromStdString(pageOwner->getPassword()) );
    ui -> numberTxtBar   -> setText(QString::fromStdString(pageOwner->getPhoneNum()) );
    ui -> countryTxtBar  -> setText(QString::fromStdString(pageOwner->getCountry())  );
    ui -> linkTxtBar     -> setText(QString::fromStdString(pageOwner->getLink())     );
    ui -> bioTxtedit     -> setPlainText(QString::fromStdString(pageOwner->getBiogarghy()));

    //ui -> dateTxtBar     -> setText(QString::fromStdString(appPtr->getMainUser()->getFirstName()));
    if (!myPage ||appPtr->bringType() == 'a')
    {
        ui -> nameTxtBar     -> setEnabled(false);
        ui -> orguserTxtBar  -> setEnabled(false);
        ui -> numberTxtBar   -> setEnabled(false);
        ui -> countryTxtBar  -> setEnabled(false);
        ui -> linkTxtBar     -> setEnabled(false);
        ui -> dateTxtBar     -> setEnabled(false);
        ui -> bioTxtedit     -> setEnabled(false);
        ui -> colorBtnchoose -> setEnabled(false);
        ui -> photoBtnchoose -> setEnabled(false);

        if(!myPage)
        {
            ui->usernameTxtBar->setEnabled(false);
            ui->passwordTxtBar->setEnabled(false);
            ui->passwordTxtBar->setEchoMode(QLineEdit::Password);
            ui->enterBtn ->setEnabled(false);
            ui->cancelBtn->setEnabled(false);
            ui->colorBtnchoose->setEnabled(false);
            ui->photoBtnchoose->setEnabled(false);
        }

        ui -> HeaderColor-> setPalette(QPalette("black"));

        QPixmap pix(":/img/781-7812555_anonymous-mask-png-transparent-images-anonymous-icon-red.jpeg");
        ui -> Pic -> setPixmap(pix.scaled(ui -> Pic -> width() ,ui -> Pic -> height() , Qt :: KeepAspectRatio));

    }
    if(appPtr->bringType() == 'o' || appPtr->bringType() == 'p')
    {
        if(appPtr->bringType() == 'o')
        {
            ui -> orguserTxtBar  -> setText(QString::fromStdString(appPtr->getMainUser()->getFirstName()));
        }
        else
        {
            ui -> orguserTxtBar  ->setEnabled(false);
        }

        //QString toQstring = QString :: fromUtf8(appPtr -> getMainUser() ->getHeaderColor().c_str());
        //HOW TO CONVERT Qstring to QColor?
        //ui -> HeaderColor-> setPalette(QPalette());

        if (pageOwner ->getProfilePic() != "")
        {
            QString toQstring = QString :: fromUtf8(appPtr -> getMainUser() ->getProfilePic().c_str());

            QPixmap pix(toQstring);
            ui -> Pic -> setPixmap(pix.scaled(ui -> Pic -> width() ,ui -> Pic -> height() , Qt :: KeepAspectRatio));
        }
        else
        {
            QPixmap pix(":/img/user-128.png");
            ui -> Pic -> setPixmap(pix.scaled(ui -> Pic -> width() ,ui -> Pic -> height() , Qt :: KeepAspectRatio));
        }
        std::cerr << "EditAccount::EditAccount-> secend if end  \n";
    }
}

EditAccount::~EditAccount()
{
    delete ui;
}

void EditAccount::on_colorBtnchoose_clicked()
{
    QColor color = QColorDialog :: getColor(Qt :: red , this , "Choose a color!");
    if (color.isValid())
    {
        ui -> HeaderColor-> setPalette(QPalette(color));

        QString toQstring = color.name(QColor :: HexArgb);
        std :: string toString = toQstring.toUtf8().constData();
        appPtr -> getMainUser() ->setHeaderColor(toString);
    }
}

void EditAccount::on_photoBtnchoose_clicked()
{
    QString filter = "All files (*.*) ;; Picturs (*.jpeg) ;; Picturs (*.png) ;; Picturs (*.jpg)";

    QString fileName = QFileDialog :: getOpenFileName(this , "Choose a picture" , "/home" , filter);
    QPixmap pix5(fileName);
    ui -> Pic -> setPixmap(pix5.scaled(ui -> Pic -> width() ,ui -> Pic -> height() , Qt :: KeepAspectRatio));

    std :: string fileNameString = fileName.toUtf8().constData();//
    appPtr -> getMainUser() ->setProfilePic(fileNameString); //
}

void EditAccount::on_cancelBtn_clicked()
{
    close();
}


void EditAccount::on_enterBtn_clicked()
{
    std::string input;
    input  = ui -> nameTxtBar     ->text().toStdString();
    input  = ui -> usernameTxtBar ->text().toStdString();
    input  = ui -> passwordTxtBar ->text().toStdString();
    input  = ui -> numberTxtBar   ->text().toStdString();
    input  = ui -> countryTxtBar  ->text().toStdString();
    input  = ui -> linkTxtBar     ->text().toStdString();
    input  = ui -> bioTxtedit     ->toPlainText().toStdString();

}

