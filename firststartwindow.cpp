#include "firststartwindow.h"
#include "ui_systemstart.h"

FirstStartWindow::FirstStartWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FirstStartWindow)
{
    ui->setupUi(this);
}

FirstStartWindow::~FirstStartWindow()
{
    delete ui;
}
