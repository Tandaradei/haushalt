/********************************************************************************
** Form generated from reading UI file 'firststartwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTSTARTWINDOW_H
#define UI_FIRSTSTARTWINDOW_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstStartWindow
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameField;
    QLabel *emaillabel;
    QLineEdit *emailField;
    QLabel *birthLabel;
    QDateEdit *dateEdit;
    QLabel *pwLabel;
    QLineEdit *pwField;
    QLabel *pwwdhLabel;
    QLineEdit *pwwdhField;
    QLabel *errorLabel;
    QPushButton *admincreateButton;

    void setupUi(QWidget *FirstStartWindow)
    {
        if (FirstStartWindow->objectName().isEmpty())
            FirstStartWindow->setObjectName(QStringLiteral("FirstStartWindow"));
        FirstStartWindow->resize(280, 250);
        FirstStartWindow->setMinimumSize(QSize(280, 250));
        FirstStartWindow->setMaximumSize(QSize(280, 250));
        verticalLayout = new QVBoxLayout(FirstStartWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, -1, 6);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        nameLabel = new QLabel(FirstStartWindow);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameField = new QLineEdit(FirstStartWindow);
        nameField->setObjectName(QStringLiteral("nameField"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameField);

        emaillabel = new QLabel(FirstStartWindow);
        emaillabel->setObjectName(QStringLiteral("emaillabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, emaillabel);

        emailField = new QLineEdit(FirstStartWindow);
        emailField->setObjectName(QStringLiteral("emailField"));

        formLayout->setWidget(1, QFormLayout::FieldRole, emailField);

        birthLabel = new QLabel(FirstStartWindow);
        birthLabel->setObjectName(QStringLiteral("birthLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, birthLabel);

        dateEdit = new QDateEdit(FirstStartWindow);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setCalendarPopup(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, dateEdit);

        pwLabel = new QLabel(FirstStartWindow);
        pwLabel->setObjectName(QStringLiteral("pwLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, pwLabel);

        pwField = new QLineEdit(FirstStartWindow);
        pwField->setObjectName(QStringLiteral("pwField"));
        pwField->setEchoMode(QLineEdit::Password);
        pwField->setClearButtonEnabled(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, pwField);

        pwwdhLabel = new QLabel(FirstStartWindow);
        pwwdhLabel->setObjectName(QStringLiteral("pwwdhLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, pwwdhLabel);

        pwwdhField = new QLineEdit(FirstStartWindow);
        pwwdhField->setObjectName(QStringLiteral("pwwdhField"));
        pwwdhField->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(4, QFormLayout::FieldRole, pwwdhField);

        errorLabel = new QLabel(FirstStartWindow);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setMinimumSize(QSize(0, 40));
        errorLabel->setWordWrap(true);

        formLayout->setWidget(5, QFormLayout::FieldRole, errorLabel);

        admincreateButton = new QPushButton(FirstStartWindow);
        admincreateButton->setObjectName(QStringLiteral("admincreateButton"));
        QIcon icon;
        icon.addFile(QStringLiteral("resources/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        admincreateButton->setIcon(icon);

        formLayout->setWidget(6, QFormLayout::FieldRole, admincreateButton);


        verticalLayout->addLayout(formLayout);


        retranslateUi(FirstStartWindow);

        QMetaObject::connectSlotsByName(FirstStartWindow);
    } // setupUi

    void retranslateUi(QWidget *FirstStartWindow)
    {
        FirstStartWindow->setWindowTitle(QApplication::translate("FirstStartWindow", "Admin festlegen", 0));
        nameLabel->setText(QApplication::translate("FirstStartWindow", "Name", 0));
        emaillabel->setText(QApplication::translate("FirstStartWindow", "E-Mail", 0));
        birthLabel->setText(QApplication::translate("FirstStartWindow", "Geburtsdatum", 0));
        pwLabel->setText(QApplication::translate("FirstStartWindow", "Passwort", 0));
        pwwdhLabel->setText(QApplication::translate("FirstStartWindow", "Passwort wiederholen", 0));
        errorLabel->setText(QString());
        admincreateButton->setText(QApplication::translate("FirstStartWindow", "Anlegen", 0));
    } // retranslateUi

};

namespace Ui {
    class FirstStartWindow: public Ui_FirstStartWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTSTARTWINDOW_H
