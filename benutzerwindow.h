#pragma once

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

    // TODO change category and payMethod to reference on Category/PayMethod objects and use .name for table entry
    void addTransactionEntry(QDate date, float amount, QString description, QString category, QString payMethod);

private:
    void initTable();
    Ui::BenutzerWindow *ui;
    size_t transactionEntriesCount;
};

