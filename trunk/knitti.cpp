#include "knitti.h"
#include "ui_knitti.h"

knitti::knitti(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::knitti)
{
    ui->setupUi(this);
}

knitti::~knitti()
{
    delete ui;
}
