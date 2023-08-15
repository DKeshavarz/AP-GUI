#ifndef USERACOUNT_H
#define USERACOUNT_H

#include <QDialog>

namespace Ui {
class UserAcount;
}

class UserAcount : public QDialog
{
    Q_OBJECT

public:
    explicit UserAcount(QWidget *parent = nullptr);
    ~UserAcount();

private:
    Ui::UserAcount *ui;
};

#endif // USERACOUNT_H
