#pragma once

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>

namespace Ui {
class LoginWindow;
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
    Ui::LoginWindow *ui;
    UserWindow* benutzerWindow;
    QGraphicsScene scene;
    QImage image;
    QGraphicsPixmapItem* imageItem;

};

