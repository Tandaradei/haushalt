#include "erster_systemstart.h"
#include "ui_erster_systemstart.h"

Erster_systemstart::Erster_systemstart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::erster_systemstart)
{
    ui->setupUi(this);
}

Erster_systemstart::~Erster_systemstart()
{
    delete ui;
}
