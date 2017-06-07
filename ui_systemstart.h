/********************************************************************************
** Form generated from reading UI file 'systemstart.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMSTART_H
#define UI_SYSTEMSTART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Systemstart
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLabel *label_2;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QDateEdit *dateEdit;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit_3;
    QLabel *label_6;

    void setupUi(QWidget *Systemstart)
    {
        if (Systemstart->objectName().isEmpty())
            Systemstart->setObjectName(QStringLiteral("Systemstart"));
        Systemstart->resize(280, 250);
        Systemstart->setMinimumSize(QSize(280, 250));
        Systemstart->setMaximumSize(QSize(280, 250));
        verticalLayout = new QVBoxLayout(Systemstart);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, -1, 6);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(Systemstart);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEdit = new QLineEdit(Systemstart);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_4 = new QLabel(Systemstart);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        lineEdit_2 = new QLineEdit(Systemstart);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_5 = new QLabel(Systemstart);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        label_2 = new QLabel(Systemstart);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        lineEdit_4 = new QLineEdit(Systemstart);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setEchoMode(QLineEdit::Password);
        lineEdit_4->setClearButtonEnabled(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        pushButton = new QPushButton(Systemstart);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QIcon icon;
        icon.addFile(QStringLiteral("resources/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);

        formLayout->setWidget(7, QFormLayout::FieldRole, pushButton);

        dateEdit = new QDateEdit(Systemstart);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setCalendarPopup(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, dateEdit);

        label = new QLabel(Systemstart);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(6, QFormLayout::FieldRole, verticalSpacer);

        lineEdit_3 = new QLineEdit(Systemstart);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_3);

        label_6 = new QLabel(Systemstart);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(5, QFormLayout::FieldRole, label_6);


        verticalLayout->addLayout(formLayout);


        retranslateUi(Systemstart);

        QMetaObject::connectSlotsByName(Systemstart);
    } // setupUi

    void retranslateUi(QWidget *Systemstart)
    {
        Systemstart->setWindowTitle(QApplication::translate("Systemstart", "Admin festlegen", 0));
        label_3->setText(QApplication::translate("Systemstart", "Name", 0));
        label_4->setText(QApplication::translate("Systemstart", "E-Mail", 0));
        label_5->setText(QApplication::translate("Systemstart", "Geburtsdatum", 0));
        label_2->setText(QApplication::translate("Systemstart", "Passwort", 0));
        pushButton->setText(QApplication::translate("Systemstart", "Anlegen", 0));
        label->setText(QApplication::translate("Systemstart", "Passwort wiederholen", 0));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Systemstart: public Ui_Systemstart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMSTART_H
