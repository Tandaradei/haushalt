#include "benutzerwindow.h"
#include "ui_benutzerwindow.h"

BenutzerWindow::BenutzerWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BenutzerWindow)
{
    ui->setupUi(this);
}

BenutzerWindow::~BenutzerWindow()
{
    delete ui;
}
