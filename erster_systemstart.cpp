#include "erster_systemstart.h"
#include "ui_erster_systemstart.h"

erster_systemstart::erster_systemstart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::erster_systemstart)
{
    ui->setupUi(this);
}

erster_systemstart::~erster_systemstart()
{
    delete ui;
}
