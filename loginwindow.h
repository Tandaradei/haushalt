#pragma once

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>

namespace Ui {
class Login;
}
class UserWindow;

class LoginWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

private slots:
    void handleLoginButton();

private:
    Ui::Login *ui;
    UserWindow* benutzerWindow;
    QGraphicsScene scene;
    QImage image;
    QGraphicsPixmapItem* imageItem;

};

