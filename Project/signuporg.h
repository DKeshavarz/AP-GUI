#ifndef SIGNUPORG_H
#define SIGNUPORG_H

#include <QDialog>

namespace Ui {
class SignUpOrg;
}

class SignUpOrg : public QDialog
{
    Q_OBJECT

public:
    explicit SignUpOrg(QWidget *parent = nullptr);
    ~SignUpOrg();

private slots:
    void on_cancelBtn_clicked();

private:
    Ui::SignUpOrg *ui;
};

#endif // SIGNUPORG_H
