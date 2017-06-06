#include "erster_login.h"
#include "ui_erster_login.h"

Erster_login::Erster_login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Erster_login)
{
    ui->setupUi(this);
}

Erster_login::~Erster_login()
{
    delete ui;
}
