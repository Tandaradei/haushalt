/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

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

class Ui_LoginWindow
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

    void setupUi(QWidget *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(240, 280);
        LoginWindow->setMinimumSize(QSize(240, 280));
        LoginWindow->setMaximumSize(QSize(240, 280));
        verticalLayout = new QVBoxLayout(LoginWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        graphicsView = new QGraphicsView(LoginWindow);
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
        emailLabel = new QLabel(LoginWindow);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, emailLabel);

        emailField = new QLineEdit(LoginWindow);
        emailField->setObjectName(QStringLiteral("emailField"));

        formLayout->setWidget(0, QFormLayout::FieldRole, emailField);

        passwordLabel = new QLabel(LoginWindow);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, passwordLabel);

        passwordField = new QLineEdit(LoginWindow);
        passwordField->setObjectName(QStringLiteral("passwordField"));
        passwordField->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordField);

        errorLabel = new QLabel(LoginWindow);
        errorLabel->setObjectName(QStringLiteral("errorLabel"));
        errorLabel->setEnabled(true);
        errorLabel->setMinimumSize(QSize(0, 40));
        errorLabel->setMaximumSize(QSize(16777215, 40));
        errorLabel->setAutoFillBackground(false);
        errorLabel->setFrameShape(QFrame::NoFrame);
        errorLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        errorLabel->setWordWrap(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, errorLabel);

        loginButton = new QPushButton(LoginWindow);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        QIcon icon;
        icon.addFile(QStringLiteral("resources/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        loginButton->setIcon(icon);
        loginButton->setAutoDefault(true);
        loginButton->setDefault(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, loginButton);


        verticalLayout->addLayout(formLayout);


        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "Login", 0));
        emailLabel->setText(QApplication::translate("LoginWindow", "E-Mail", 0));
        passwordLabel->setText(QApplication::translate("LoginWindow", "Passwort", 0));
        errorLabel->setText(QString());
        loginButton->setText(QApplication::translate("LoginWindow", "Login", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
