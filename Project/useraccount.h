#ifndef USERACCOUNT_H
#define USERACCOUNT_H

#include "editaccount.h"

#include <QDialog>

namespace Ui {
class UserAccount;
}

class UserAccount : public QDialog
{
    Q_OBJECT

public:
    explicit UserAccount(QWidget *parent = nullptr);
    ~UserAccount();

private slots:
    void on_settingBtn_clicked();

    void on_exitBtn_clicked();

    void on_userSearchBtn_clicked();

private:
    Ui::UserAccount *ui;

    EditAccount *op;
};

#endif // USERACCOUNT_H
