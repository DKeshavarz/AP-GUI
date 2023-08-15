#include "search.h"
#include "ui_search.h"

#include <QPixmap>

Search::Search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Search)
{
    ui->setupUi(this);

    QPixmap pix(":/img/BG1.jpeg");
    ui -> BG -> setPixmap(pix.scaled(this -> width() , this -> height()));

}

Search::~Search()
{
    delete ui;
}
