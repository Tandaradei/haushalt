#include "loginwindow.h"
#include "ui_login.h"
#include "userwindow.h"

LoginWindow::LoginWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginWindow),
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

LoginWindow::~LoginWindow()
{
  delete ui;
  delete benutzerWindow;
}

void LoginWindow::handleLoginButton()
{
  if(ui->emailField->text() == "Admin" && ui->passwordField->text() == "admin")
  {
    this->hide();
    benutzerWindow = new UserWindow();
    benutzerWindow->show();
    this->destroy();
  }
  else
  {
    ui->errorLabel->setText("Email und Passwort stimmen nicht überein");
  }
}
