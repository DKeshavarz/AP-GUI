#ifndef SIGNUP_H
#define SIGNUP_H

#include "mainwindow.h"
#include "QRadioButton"
#include <QDialog>

#include "includes/twitterak.h"

namespace Ui {
class SignUp;
}

class SignUp : public QDialog
{   
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = nullptr,Twitterak* = nullptr);

    ~SignUp();

private slots:
    void on_orgRbtn_clicked();

    void on_perRbtn_clicked();

    void on_anoRbtn_clicked();

    void on_seePassBtn_clicked();

    void on_unseePassBtn_clicked();

    void on_enterBtn_clicked();

private:
    Ui::SignUp *ui;
    MainWindow main;// to access the flags of type of users in mainwindow

    //***logic****
    Twitterak* appPtr ;
    char selectedType ; //p:persenal  , o:organization ,  a:anonymous
};


#endif // SIGNUP_H
