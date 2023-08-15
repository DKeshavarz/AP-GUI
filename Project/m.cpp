#include "m.h"
#include "ui_m.h"

m::m(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::m)
{
    ui->setupUi(this);
}

m::~m()
{
    delete ui;
}
