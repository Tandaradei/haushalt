/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QFormLayout *formLayout;
    QLabel *emailLabel;
    QLineEdit *emailField;
    QLabel *passwordLabel;
    QLineEdit *passwordField;
    QLabel *errorLabel;
    QPushButton *loginButton;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(240, 280);
        Login->setMinimumSize(QSize(240, 280));
        Login->setMaximumSize(QSize(240, 280));
        verticalLayout = new QVBoxLayout(Login);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        graphicsView = new QGraphicsView(Login);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setFrameShape(QFrame::NoFrame);
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        QBrush brush(QColor(0, 0, 0, 0));
        brush.setStyle(Qt::NoBrush);
        graphicsView->setBackgroundBrush(brush);
        QBrush brush1(QColor(0, 0, 0, 0));
        brush1.setStyle(Qt::NoBrush);
        graphicsView->setForegroundBrush(brush1);

        verticalLayout->addWidget(graphicsView);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        emailLabel = new QLabel(Login);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, emailLabel);

        emailField = new QLineEdit(Login);
        emailField->setObjectName(QStringLiteral("emailField"));

        formLayout->setWidget(0, QFormLayout::FieldRole, emailField);

        passwordLabel = new QLabel(Login);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, passwordLabel);

        passwordField = new QLineEdit(Login);
        passwordField->setObjectName(QStringLiteral("passwordField"));
        passwordField->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordField);

        errorLabel = new QLabel(Login);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setMinimumSize(QSize(0, 40));
        errorLabel->setMaximumSize(QSize(16777215, 40));
        errorLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        errorLabel->setWordWrap(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, errorLabel);

        loginButton = new QPushButton(Login);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        QIcon icon;
        icon.addFile(QStringLiteral("resources/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        loginButton->setIcon(icon);
        loginButton->setAutoDefault(true);
        loginButton->setDefault(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, loginButton);


        verticalLayout->addLayout(formLayout);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", 0));
        emailLabel->setText(QApplication::translate("Login", "E-Mail", 0));
        passwordLabel->setText(QApplication::translate("Login", "Passwort", 0));
        errorLabel->setText(QString());
        loginButton->setText(QApplication::translate("Login", "Login", 0));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
