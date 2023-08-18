#ifndef USERACCOUNT_H
#define USERACCOUNT_H

#include "editaccount.h"

#include <QDialog>

//logic
#include "includes/twitterak.h"

namespace Ui {
class UserAccount;
}

class UserAccount : public QDialog
{
    Q_OBJECT

public:
    explicit UserAccount(QWidget *parent = nullptr,Twitterak* = nullptr);
    ~UserAccount();

    void showTweet     ();
    void checkBtnFollow();

private slots:
    void on_settingBtn_clicked();

    void on_exitBtn_clicked();

    void on_userSearchBtn_clicked();

    void on_nextBtn_clicked();

    void on_preBtn_clicked();

    void on_followBtn_clicked();

private:
    Ui::UserAccount *ui;

    EditAccount *op;

    Twitterak* appPtr;
};

#endif // USERACCOUNT_H
