#ifndef ERSTER_LOGIN_H
#define ERSTER_LOGIN_H

#include <QWidget>

namespace Ui {
class Erster_login;
}

class Erster_login : public QWidget
{
    Q_OBJECT

public:
    explicit Erster_login(QWidget *parent = 0);
    ~Erster_login();

private:
    Ui::Erster_login *ui;
};

#endif // ERSTER_LOGIN_H
