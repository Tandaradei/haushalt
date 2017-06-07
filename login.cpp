#include "login.h"
#include "ui_login.h"
#include "benutzerwindow.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login),
    benutzerWindow(nullptr)
{
    ui->setupUi(this);
    connect(ui->loginButton, SIGNAL (released()), this, SLOT (handleLoginButton()));
}

Login::~Login()
{
  delete ui;
}

void Login::handleLoginButton()
{
  if(ui->emailField->text() == "Admin" && ui->passwordField->text() == "admin")
  {
    this->hide();
    benutzerWindow = new BenutzerWindow();
    benutzerWindow->show();
  }
  else
  {
    ui->errorLabel->setText("Email und Passwort stimmen nicht überein");
  }
}
