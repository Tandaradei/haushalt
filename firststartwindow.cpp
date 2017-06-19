#include "firststartwindow.h"
#include "ui_firststartwindow.h"
//#include "ui_systemstart.h"
#include "startcontroller.h"


FirstStartWindow::FirstStartWindow(StartController& startController, QWidget *parent) :
    QWidget(parent),
    startController(startController),
    ui(new Ui::FirstStartWindow)
{
    ui->setupUi(this);
    connect(ui->admincreateButton, SIGNAL (released()), this, SLOT (handlesetAdminButton()));
}

void FirstStartWindow::handlesetAdminButton()
{
  if(ui->pwField->text() != ui->pwwdhField->text())
  {
      ui->erroLabel->setText("Passwort stimmt nicht überein");
  }
  else if(ui->nameField->text().isEmpty())
  {
      ui->erroLabel->setText("Bitte geben sie einen gültigen Namen ein");
  }
  else if(ui->emailField->text().isEmpty())
  {
      ui->erroLabel->setText("Bitte geben sie eine gültige Email ein");
  }
  else
  {
      startController.createAdmin(ui->nameField->text(), ui->emailField->text(), ui->dateEdit->date(), ui->pwField->text());
  }
}

FirstStartWindow::~FirstStartWindow()
{
    delete ui;
}
