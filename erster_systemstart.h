#ifndef ERSTER_SYSTEMSTART_H
#define ERSTER_SYSTEMSTART_H

#include <QWidget>

namespace Ui {
class erster_systemstart;
}

class Erster_systemstart : public QWidget
{
    Q_OBJECT

public:
    explicit Erster_systemstart(QWidget *parent = 0);
    ~Erster_systemstart();

private:
    Ui::erster_systemstart *ui;
};

#endif // ERSTER_SYSTEMSTART_H
