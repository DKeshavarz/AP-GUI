#ifndef CHECKACCOUNTTYPE_H
#define CHECKACCOUNTTYPE_H

#include <QDialog>

namespace Ui {
class CheckAccountType;
}

class CheckAccountType : public QDialog
{
    Q_OBJECT

public:
    explicit CheckAccountType(QWidget *parent = nullptr);
    ~CheckAccountType();

private slots:
    void on_enterBtn_clicked();

private:
    Ui::CheckAccountType *ui;
};

#endif // CHECKACCOUNTTYPE_H
