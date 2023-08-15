#ifndef M_H
#define M_H

#include <QMainWindow>

namespace Ui {
class m;
}

class m : public QMainWindow
{
    Q_OBJECT

public:
    explicit m(QWidget *parent = nullptr);
    ~m();

private:
    Ui::m *ui;
};

#endif // M_H
