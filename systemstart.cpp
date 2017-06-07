#include "systemstart.h"
#include "ui_systemstart.h"

Systemstart::Systemstart(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Systemstart)
{
    ui->setupUi(this);
}

Systemstart::~Systemstart()
{
    delete ui;
}
