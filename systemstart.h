#pragma once

#include <QWidget>

namespace Ui {
class Systemstart;
}

class Systemstart : public QWidget
{
    Q_OBJECT

public:
    explicit Systemstart(QWidget *parent = 0);
    ~Systemstart();

private:
    Ui::Systemstart *ui;
};

