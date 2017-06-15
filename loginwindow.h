#pragma once

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>

namespace Ui {
class LoginWindow;
}

class StartController;

class LoginWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWindow(StartController& startController, QWidget *parent = 0);
    ~LoginWindow();

private slots:
    void handleLoginButton();

private:
    StartController& startController;

    Ui::LoginWindow *ui;
    QGraphicsScene scene;
    QImage image;
    QGraphicsPixmapItem* imageItem;

};

