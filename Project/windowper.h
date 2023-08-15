#ifndef WINDOWPER_H
#define WINDOWPER_H

#include "mainwindow.h"
#include "signup.h"
#include <QDialog>

//logic
#include "includes/twitterak.h"

namespace Ui {
class WindowPer;
}

class WindowPer : public QDialog
{
    Q_OBJECT

public:
    explicit WindowPer(QWidget *parent = nullptr, Twitterak* = nullptr);

    ~WindowPer();

private slots:
    void on_settingBtn_clicked();

    void on_exitBtn_clicked();

    void on_logoutBtn_clicked();

    void on_addBtn_clicked();

    void on_saveBtn_clicked();

    void on_userSearchBtn_clicked();

private:
    Ui::WindowPer *ui;
    MainWindow main;// to access the flags of type of users in mainwindow

    //logic
    Twitterak* appPtr ;
};

#endif // WINDOWPER_H
