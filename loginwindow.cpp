#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "startcontroller.h"

LoginWindow::LoginWindow(StartController& startController, QWidget *parent) :
    QWidget(parent)
    ,startController(startController)
    ,ui(new Ui::LoginWindow)
    ,scene()
    ,image("resources/logo.png")
    ,imageItem(nullptr)

{
    ui->setupUi(this);
    connect(ui->loginButton, SIGNAL (released()), this, SLOT (handleLoginButton()));

    // set logo
    imageItem = new QGraphicsPixmapItem(QPixmap::fromImage(image));
    scene.addItem(imageItem);

    ui->graphicsView->setScene(&scene);
}

LoginWindow::~LoginWindow()
{
  delete ui;
}

void LoginWindow::handleLoginButton()
{
  // if login failed
  if(!startController.onLoginClicked(ui->emailField->text(), ui->passwordField->text()))
  {
      ui->errorLabel->setText("E-Mail und Password stimmen nicht überein");
  }
}
