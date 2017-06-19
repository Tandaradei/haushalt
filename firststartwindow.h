#pragma once

#include <QWidget>


namespace Ui {
class FirstStartWindow;
}

class StartController;

class FirstStartWindow : public QWidget
{
    Q_OBJECT

public:
    explicit FirstStartWindow(StartController& startController, QWidget *parent = 0);
    ~FirstStartWindow();

private slots:
    void handlesetAdminButton();

private:
    StartController& startController;

    Ui::FirstStartWindow *ui;
};

