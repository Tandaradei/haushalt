#include "login.h"
#include "ui_login.h"
#include "benutzerwindow.h"

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login),
    benutzerWindow(nullptr),
    scene(),
    image("resources/logo.png"),
    imageItem(nullptr)

{
    ui->setupUi(this);
    connect(ui->loginButton, SIGNAL (released()), this, SLOT (handleLoginButton()));

    imageItem = new QGraphicsPixmapItem(QPixmap::fromImage(image));
    scene.addItem(imageItem);

    ui->graphicsView->setScene(&scene);
}

Login::~Login()
{
  delete ui;
  delete benutzerWindow;
}

void Login::handleLoginButton()
{
  if(ui->emailField->text() == "Admin" && ui->passwordField->text() == "admin")
  {
    this->hide();
    benutzerWindow = new BenutzerWindow();
    benutzerWindow->show();
    this->destroy();
  }
  else
  {
    ui->errorLabel->setText("Email und Passwort stimmen nicht überein");
  }
}
