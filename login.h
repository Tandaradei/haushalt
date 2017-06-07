#pragma once

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>

namespace Ui {
class Login;
}
class BenutzerWindow;

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void handleLoginButton();

private:
    Ui::Login *ui;
    BenutzerWindow* benutzerWindow;
    QGraphicsScene scene;
    QImage image;
    QGraphicsPixmapItem* imageItem;

};

