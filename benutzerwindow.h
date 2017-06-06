#ifndef BENUTZERWINDOW_H
#define BENUTZERWINDOW_H

#include <QMainWindow>

namespace Ui {
class BenutzerWindow;
}

class BenutzerWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BenutzerWindow(QWidget *parent = 0);
    ~BenutzerWindow();

private:
    Ui::BenutzerWindow *ui;
};

#endif // BENUTZERWINDOW_H
