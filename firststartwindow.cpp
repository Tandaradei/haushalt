#include "firststartwindow.h"
#include "ui_firststartwindow.h"
#include "startcontroller.h"


FirstStartWindow::FirstStartWindow(StartController& startController, QWidget *parent) :
    QWidget(parent),
    startController(startController),
    ui(new Ui::FirstStartWindow)
{
    ui->setupUi(this);
    // connect button with handle function
    connect(ui->admincreateButton, SIGNAL (released()), this, SLOT (handlesetAdminButton()));
}

void FirstStartWindow::handlesetAdminButton()
{
  // test if name is empty
  if(ui->nameField->text().isEmpty())
  {
      ui->errorLabel->setText("Bitte geben sie einen gültigen Namen ein");
  }
  // test if email is empty
  else if(ui->emailField->text().isEmpty())
  {
      ui->errorLabel->setText("Bitte geben sie eine gültige Email ein");
  }
  // test if password is empty
  else if(ui->pwField->text().isEmpty())
  {
      ui->errorLabel->setText("Bitte geben sie ein gültige Passwort an");
  }
  // test if passwords are not same
  else if(ui->pwField->text() != ui->pwwdhField->text())
  {
      ui->errorLabel->setText("Passwort stimmt nicht überein");
  }
  // create admin
  else
  {
      startController.createAdmin(ui->nameField->text(), ui->emailField->text(), ui->dateEdit->date(), ui->pwField->text());
  }
}

FirstStartWindow::~FirstStartWindow()
{
    delete ui;
}
