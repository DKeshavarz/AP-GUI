#include "editaccount.h"
#include "ui_editaccount.h"

#include <QColorDialog>
#include <QColor>
#include <QPixmap>
#include <QFileDialog>

EditAccount::EditAccount(QWidget *parent,Twitterak* ptr) :
    QDialog(parent),
    ui(new Ui::EditAccount),
    appPtr(ptr)
{
    ui->setupUi(this);

    QPixmap pix(":/img/BG.jpg");
    ui -> BG -> setPixmap(pix.scaled(this -> width() , this -> height()));

    //disable all in window

    ui -> nameTxtBar     -> setText(QString::fromStdString(appPtr->getMainUser()->getFirstName()));
    ui -> usernameTxtBar -> setText(QString::fromStdString(appPtr->getMainUser()->getUserName()) );
    ui -> orguserTxtBar  -> setText(QString::fromStdString(appPtr->getMainUser()->getFirstName()));//wtf
    ui -> passwordTxtBar -> setText(QString::fromStdString(appPtr->getMainUser()->getPassword()) );
    ui -> numberTxtBar   -> setText(QString::fromStdString(appPtr->getMainUser()->getFirstName()));//wtf
    ui -> countryTxtBar  -> setText(QString::fromStdString(appPtr->getMainUser()->getCountry()));
    ui -> linkTxtBar     -> setText(QString::fromStdString(appPtr->getMainUser()->getLink()));
    ui -> dateTxtBar     -> setText(QString::fromStdString(appPtr->getMainUser()->getFirstName()));//wtf

    ui -> nameTxtBar     -> setEnabled(false);
    ui -> HeaderColor    -> setEnabled(false);// most read on file
    ui -> usernameTxtBar -> setEnabled(false);
    ui -> orguserTxtBar  -> setEnabled(false);
    ui -> passwordTxtBar -> setEnabled(false);
    ui -> numberTxtBar   -> setEnabled(false);
    ui -> countryTxtBar  -> setEnabled(false);
    ui -> linkTxtBar     -> setEnabled(false);
    ui -> dateTxtBar     -> setEnabled(false);
    ui -> bioTxtedit     -> setEnabled(false); // most read on file
    ui -> colorBtnchoose -> setEnabled(false);// most read on file
    ui -> photoBtnchoose -> setEnabled(false);// most read on file



    //go to enable some
    if (main.flagO)
    {
        //bio 1100 word
        ui -> nameTxtBar     -> setEnabled(true);
        ui -> usernameTxtBar -> setEnabled(true);
        ui -> orguserTxtBar  -> setEnabled(true);
        ui -> passwordTxtBar -> setEnabled(true);
        ui -> numberTxtBar   -> setEnabled(true);
        ui -> countryTxtBar  -> setEnabled(true);
        ui -> linkTxtBar     -> setEnabled(true);
        ui -> bioTxtedit     -> setEnabled(true);
        ui -> colorBtnchoose -> setEnabled(true);
        ui -> photoBtnchoose -> setEnabled(true);
        ui -> dateTxtBar     -> setEnabled(false);


        QString toQstring = QString :: fromUtf8(appPtr -> getMainUser() ->getHeaderColor().c_str());
        //HOW TO CONVERT Qstring to QColor?
        //ui -> HeaderColor-> setPalette(QPalette());

        if (appPtr -> getMainUser() ->getProfilePic() != "")
        {
            QString toQstring = QString :: fromUtf8(appPtr -> getMainUser() ->getProfilePic().c_str());

            QPixmap pix(toQstring);
            ui -> Pic -> setPixmap(pix.scaled(ui -> Pic -> width() ,ui -> Pic -> height() , Qt :: KeepAspectRatio));
        }
        else
        {
            QPixmap pix(":/img/DotORG_logo.svg.png");
            ui -> Pic -> setPixmap(pix.scaled(ui -> Pic -> width() ,ui -> Pic -> height() , Qt :: KeepAspectRatio));
        }

    }

    if (main.flagP)
    {
        ui -> nameTxtBar     -> setEnabled(true);
        ui -> usernameTxtBar -> setEnabled(true);
        ui -> orguserTxtBar  -> setEnabled(true);
        ui -> passwordTxtBar -> setEnabled(true);
        ui -> numberTxtBar   -> setEnabled(true);
        ui -> countryTxtBar  -> setEnabled(true);
        ui -> linkTxtBar     -> setEnabled(true);
        ui -> dateTxtBar     -> setEnabled(true);
        ui -> colorBtnchoose -> setEnabled(true);
        //write on file
        ui -> bioTxtedit     -> setEnabled(true);
        ui -> photoBtnchoose -> setEnabled(true);



        QString toQstring = QString :: fromUtf8(appPtr -> getMainUser() ->getHeaderColor().c_str());
        //HOW TO CONVERT Qstring to QColor?
        //ui -> HeaderColor-> setPalette(QPalette());

        if (appPtr -> getMainUser() ->getProfilePic() != "")
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

    }

    if (main.flagA)
    {
        ui -> nameTxtBar     -> setText("Anonymous User");

        ui -> usernameTxtBar -> setEnabled(true);
        ui -> passwordTxtBar -> setEnabled(true);

        ui -> nameTxtBar     -> setEnabled(false);
        ui -> orguserTxtBar  -> setEnabled(false);
        ui -> numberTxtBar   -> setEnabled(false);
        ui -> countryTxtBar  -> setEnabled(false);
        ui -> linkTxtBar     -> setEnabled(false);
        ui -> dateTxtBar     -> setEnabled(false);
        ui -> bioTxtedit     -> setEnabled(false);
        ui -> colorBtnchoose -> setEnabled(false);
        ui -> photoBtnchoose -> setEnabled(false);

        ui -> HeaderColor-> setPalette(QPalette("black"));

        QPixmap pix(":/img/781-7812555_anonymous-mask-png-transparent-images-anonymous-icon-red.jpeg");
        ui -> Pic -> setPixmap(pix.scaled(ui -> Pic -> width() ,ui -> Pic -> height() , Qt :: KeepAspectRatio));
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
