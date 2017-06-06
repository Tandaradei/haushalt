#ifndef ERSTER_SYSTEMSTART_H
#define ERSTER_SYSTEMSTART_H

#include <QWidget>

namespace Ui {
class erster_systemstart;
}

class erster_systemstart : public QWidget
{
    Q_OBJECT

public:
    explicit erster_systemstart(QWidget *parent = 0);
    ~erster_systemstart();

private:
    Ui::erster_systemstart *ui;
};

#endif // ERSTER_SYSTEMSTART_H
