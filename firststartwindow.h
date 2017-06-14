#pragma once

#include <QWidget>

namespace Ui {
class FirstStartWindow;
}

class FirstStartWindow : public QWidget
{
    Q_OBJECT

public:
    explicit FirstStartWindow(QWidget *parent = 0);
    ~FirstStartWindow();

private:
    Ui::FirstStartWindow *ui;
};

