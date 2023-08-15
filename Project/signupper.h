#ifndef SIGNUPPER_H
#define SIGNUPPER_H

#include <QDialog>

namespace Ui {
class SignUpPer;
}

class SignUpPer : public QDialog
{
    Q_OBJECT

public:
    explicit SignUpPer(QWidget *parent = nullptr);
    ~SignUpPer();

private slots:
    void on_enterBtn_clicked();

    void on_cancelBtn_clicked();

private:
    Ui::SignUpPer *ui;
};

#endif // SIGNUPPER_H
