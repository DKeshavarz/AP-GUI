#ifndef SIGNUPANO_H
#define SIGNUPANO_H

#include <QDialog>

namespace Ui {
class SignUpAno;
}

class SignUpAno : public QDialog
{
    Q_OBJECT

public:
    explicit SignUpAno(QWidget *parent = nullptr);
    ~SignUpAno();

private slots:
    void on_cancelBtn_clicked();

private:
    Ui::SignUpAno *ui;
};

#endif // SIGNUPANO_H
