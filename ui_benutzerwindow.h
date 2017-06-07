/********************************************************************************
** Form generated from reading UI file 'benutzerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BENUTZERWINDOW_H
#define UI_BENUTZERWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BenutzerWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *mainLayout;
    QTabWidget *mainTabWidget;
    QWidget *transaktionenTab;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *transaktionenTabLayout;
    QTabWidget *transaktionenTabWidget;
    QWidget *transaktionenListeTab;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *listeLayout;
    QGridLayout *filterLayout;
    QLabel *zahlungsartLabel;
    QDateEdit *vonDate;
    QLabel *kategorieLabel;
    QLabel *bisLabel;
    QComboBox *kategorieComboBox;
    QComboBox *zahlungsartComboBox;
    QLabel *vonLabel;
    QDateEdit *bisDate;
    QTableWidget *transaktionenTable;
    QHBoxLayout *optionsLayout;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QWidget *transaktionenNeuTab;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *transaktionenNeuTabLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_4;
    QTextEdit *textEdit;
    QLabel *label_5;
    QComboBox *comboBox_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *zahlungsartenTab;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QWidget *einstellungenTab;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_5;
    QWidget *abmeldenTab;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *abmeldenTabLayout;
    QLabel *abmeldenLabel;
    QPushButton *logoutButton;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BenutzerWindow)
    {
        if (BenutzerWindow->objectName().isEmpty())
            BenutzerWindow->setObjectName(QStringLiteral("BenutzerWindow"));
        BenutzerWindow->resize(800, 600);
        centralWidget = new QWidget(BenutzerWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mainLayout = new QVBoxLayout();
        mainLayout->setSpacing(0);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        mainTabWidget = new QTabWidget(centralWidget);
        mainTabWidget->setObjectName(QStringLiteral("mainTabWidget"));
        mainTabWidget->setAutoFillBackground(false);
        mainTabWidget->setElideMode(Qt::ElideLeft);
        mainTabWidget->setDocumentMode(false);
        transaktionenTab = new QWidget();
        transaktionenTab->setObjectName(QStringLiteral("transaktionenTab"));
        verticalLayout_3 = new QVBoxLayout(transaktionenTab);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        transaktionenTabLayout = new QVBoxLayout();
        transaktionenTabLayout->setSpacing(6);
        transaktionenTabLayout->setObjectName(QStringLiteral("transaktionenTabLayout"));
        transaktionenTabLayout->setContentsMargins(0, 2, 0, 0);
        transaktionenTabWidget = new QTabWidget(transaktionenTab);
        transaktionenTabWidget->setObjectName(QStringLiteral("transaktionenTabWidget"));
        transaktionenListeTab = new QWidget();
        transaktionenListeTab->setObjectName(QStringLiteral("transaktionenListeTab"));
        transaktionenListeTab->setAutoFillBackground(false);
        verticalLayout = new QVBoxLayout(transaktionenListeTab);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listeLayout = new QVBoxLayout();
        listeLayout->setSpacing(6);
        listeLayout->setObjectName(QStringLiteral("listeLayout"));
        listeLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        listeLayout->setContentsMargins(0, 2, 0, 0);
        filterLayout = new QGridLayout();
        filterLayout->setSpacing(6);
        filterLayout->setObjectName(QStringLiteral("filterLayout"));
        filterLayout->setSizeConstraint(QLayout::SetNoConstraint);
        filterLayout->setContentsMargins(0, 2, 0, 0);
        zahlungsartLabel = new QLabel(transaktionenListeTab);
        zahlungsartLabel->setObjectName(QStringLiteral("zahlungsartLabel"));

        filterLayout->addWidget(zahlungsartLabel, 0, 3, 1, 1);

        vonDate = new QDateEdit(transaktionenListeTab);
        vonDate->setObjectName(QStringLiteral("vonDate"));
        vonDate->setCalendarPopup(true);

        filterLayout->addWidget(vonDate, 1, 0, 1, 1);

        kategorieLabel = new QLabel(transaktionenListeTab);
        kategorieLabel->setObjectName(QStringLiteral("kategorieLabel"));

        filterLayout->addWidget(kategorieLabel, 0, 2, 1, 1);

        bisLabel = new QLabel(transaktionenListeTab);
        bisLabel->setObjectName(QStringLiteral("bisLabel"));

        filterLayout->addWidget(bisLabel, 0, 1, 1, 1);

        kategorieComboBox = new QComboBox(transaktionenListeTab);
        kategorieComboBox->setObjectName(QStringLiteral("kategorieComboBox"));

        filterLayout->addWidget(kategorieComboBox, 1, 2, 1, 1);

        zahlungsartComboBox = new QComboBox(transaktionenListeTab);
        zahlungsartComboBox->setObjectName(QStringLiteral("zahlungsartComboBox"));

        filterLayout->addWidget(zahlungsartComboBox, 1, 3, 1, 1);

        vonLabel = new QLabel(transaktionenListeTab);
        vonLabel->setObjectName(QStringLiteral("vonLabel"));

        filterLayout->addWidget(vonLabel, 0, 0, 1, 1);

        bisDate = new QDateEdit(transaktionenListeTab);
        bisDate->setObjectName(QStringLiteral("bisDate"));
        bisDate->setCalendarPopup(true);
        bisDate->setDate(QDate(2017, 6, 6));

        filterLayout->addWidget(bisDate, 1, 1, 1, 1);


        listeLayout->addLayout(filterLayout);

        transaktionenTable = new QTableWidget(transaktionenListeTab);
        if (transaktionenTable->columnCount() < 5)
            transaktionenTable->setColumnCount(5);
        if (transaktionenTable->rowCount() < 100)
            transaktionenTable->setRowCount(100);
        transaktionenTable->setObjectName(QStringLiteral("transaktionenTable"));
        transaktionenTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        transaktionenTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        transaktionenTable->setSortingEnabled(true);
        transaktionenTable->setRowCount(100);
        transaktionenTable->setColumnCount(5);
        transaktionenTable->horizontalHeader()->setCascadingSectionResizes(false);
        transaktionenTable->horizontalHeader()->setMinimumSectionSize(50);
        transaktionenTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        transaktionenTable->horizontalHeader()->setStretchLastSection(true);
        transaktionenTable->verticalHeader()->setVisible(false);

        listeLayout->addWidget(transaktionenTable);

        optionsLayout = new QHBoxLayout();
        optionsLayout->setSpacing(6);
        optionsLayout->setObjectName(QStringLiteral("optionsLayout"));
        editButton = new QPushButton(transaktionenListeTab);
        editButton->setObjectName(QStringLiteral("editButton"));
        editButton->setMaximumSize(QSize(100, 25));
        editButton->setLayoutDirection(Qt::LeftToRight);
        QIcon icon;
        icon.addFile(QStringLiteral("resources/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        editButton->setIcon(icon);
        editButton->setFlat(false);

        optionsLayout->addWidget(editButton);

        deleteButton = new QPushButton(transaktionenListeTab);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setMaximumSize(QSize(100, 25));
        QIcon icon1;
        icon1.addFile(QStringLiteral("resources/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon1);

        optionsLayout->addWidget(deleteButton);


        listeLayout->addLayout(optionsLayout);


        verticalLayout->addLayout(listeLayout);

        QIcon icon2;
        icon2.addFile(QStringLiteral("resources/overview.png"), QSize(), QIcon::Normal, QIcon::Off);
        transaktionenTabWidget->addTab(transaktionenListeTab, icon2, QString());
        transaktionenNeuTab = new QWidget();
        transaktionenNeuTab->setObjectName(QStringLiteral("transaktionenNeuTab"));
        verticalLayout_4 = new QVBoxLayout(transaktionenNeuTab);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 2, 0, 0);
        transaktionenNeuTabLayout = new QVBoxLayout();
        transaktionenNeuTabLayout->setSpacing(6);
        transaktionenNeuTabLayout->setObjectName(QStringLiteral("transaktionenNeuTabLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        formLayout->setContentsMargins(0, 12, -1, -1);
        label = new QLabel(transaktionenNeuTab);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        doubleSpinBox = new QDoubleSpinBox(transaktionenNeuTab);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setMinimumSize(QSize(80, 0));
        doubleSpinBox->setMaximumSize(QSize(80, 16777215));
        doubleSpinBox->setMinimum(-1e+08);
        doubleSpinBox->setMaximum(1e+08);

        formLayout->setWidget(1, QFormLayout::FieldRole, doubleSpinBox);

        label_2 = new QLabel(transaktionenNeuTab);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        dateEdit = new QDateEdit(transaktionenNeuTab);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setMinimumSize(QSize(80, 0));
        dateEdit->setMaximumSize(QSize(80, 16777215));
        dateEdit->setCalendarPopup(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, dateEdit);

        label_3 = new QLabel(transaktionenNeuTab);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        comboBox = new QComboBox(transaktionenNeuTab);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMinimumSize(QSize(80, 0));
        comboBox->setMaximumSize(QSize(100, 16777215));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBox);

        label_4 = new QLabel(transaktionenNeuTab);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        textEdit = new QTextEdit(transaktionenNeuTab);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMaximumSize(QSize(16777215, 100));

        formLayout->setWidget(5, QFormLayout::FieldRole, textEdit);

        label_5 = new QLabel(transaktionenNeuTab);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        comboBox_2 = new QComboBox(transaktionenNeuTab);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setMinimumSize(QSize(80, 0));
        comboBox_2->setMaximumSize(QSize(80, 16777215));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBox_2);

        pushButton = new QPushButton(transaktionenNeuTab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral("resources/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);

        formLayout->setWidget(7, QFormLayout::FieldRole, pushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(6, QFormLayout::FieldRole, verticalSpacer_2);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(0, QFormLayout::FieldRole, verticalSpacer);


        transaktionenNeuTabLayout->addLayout(formLayout);


        verticalLayout_4->addLayout(transaktionenNeuTabLayout);

        transaktionenTabWidget->addTab(transaktionenNeuTab, icon3, QString());

        transaktionenTabLayout->addWidget(transaktionenTabWidget);


        verticalLayout_3->addLayout(transaktionenTabLayout);

        QIcon icon4;
        icon4.addFile(QStringLiteral("resources/transactions.png"), QSize(), QIcon::Normal, QIcon::Off);
        mainTabWidget->addTab(transaktionenTab, icon4, QString());
        zahlungsartenTab = new QWidget();
        zahlungsartenTab->setObjectName(QStringLiteral("zahlungsartenTab"));
        verticalLayout_7 = new QVBoxLayout(zahlungsartenTab);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));

        verticalLayout_7->addLayout(verticalLayout_6);

        QIcon icon5;
        icon5.addFile(QStringLiteral("resources/paymethod.png"), QSize(), QIcon::Normal, QIcon::Off);
        mainTabWidget->addTab(zahlungsartenTab, icon5, QString());
        einstellungenTab = new QWidget();
        einstellungenTab->setObjectName(QStringLiteral("einstellungenTab"));
        verticalLayout_9 = new QVBoxLayout(einstellungenTab);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));

        verticalLayout_9->addLayout(verticalLayout_5);

        QIcon icon6;
        icon6.addFile(QStringLiteral("resources/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        mainTabWidget->addTab(einstellungenTab, icon6, QString());
        abmeldenTab = new QWidget();
        abmeldenTab->setObjectName(QStringLiteral("abmeldenTab"));
        verticalLayout_8 = new QVBoxLayout(abmeldenTab);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        abmeldenTabLayout = new QVBoxLayout();
        abmeldenTabLayout->setSpacing(6);
        abmeldenTabLayout->setObjectName(QStringLiteral("abmeldenTabLayout"));
        abmeldenLabel = new QLabel(abmeldenTab);
        abmeldenLabel->setObjectName(QStringLiteral("abmeldenLabel"));
        abmeldenLabel->setMaximumSize(QSize(16777215, 50));
        abmeldenLabel->setScaledContents(false);
        abmeldenLabel->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        abmeldenTabLayout->addWidget(abmeldenLabel, 0, Qt::AlignBottom);

        logoutButton = new QPushButton(abmeldenTab);
        logoutButton->setObjectName(QStringLiteral("logoutButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(logoutButton->sizePolicy().hasHeightForWidth());
        logoutButton->setSizePolicy(sizePolicy);
        logoutButton->setMaximumSize(QSize(100, 50));
        QIcon icon7;
        icon7.addFile(QStringLiteral("resources/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutButton->setIcon(icon7);
        logoutButton->setFlat(false);

        abmeldenTabLayout->addWidget(logoutButton, 0, Qt::AlignHCenter|Qt::AlignTop);


        verticalLayout_8->addLayout(abmeldenTabLayout);

        mainTabWidget->addTab(abmeldenTab, icon7, QString());

        mainLayout->addWidget(mainTabWidget);


        horizontalLayout->addLayout(mainLayout);

        BenutzerWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BenutzerWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        BenutzerWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(BenutzerWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        BenutzerWindow->setStatusBar(statusBar);

        retranslateUi(BenutzerWindow);

        mainTabWidget->setCurrentIndex(0);
        transaktionenTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(BenutzerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BenutzerWindow)
    {
        BenutzerWindow->setWindowTitle(QApplication::translate("BenutzerWindow", "BenutzerWindow", 0));
        zahlungsartLabel->setText(QApplication::translate("BenutzerWindow", "Zahlungsart", 0));
        kategorieLabel->setText(QApplication::translate("BenutzerWindow", "Kategorie", 0));
        bisLabel->setText(QApplication::translate("BenutzerWindow", "Bis", 0));
        vonLabel->setText(QApplication::translate("BenutzerWindow", "Von", 0));
        editButton->setText(QApplication::translate("BenutzerWindow", "\303\204ndern", 0));
        deleteButton->setText(QApplication::translate("BenutzerWindow", "Entfernen", 0));
        transaktionenTabWidget->setTabText(transaktionenTabWidget->indexOf(transaktionenListeTab), QApplication::translate("BenutzerWindow", "\303\234bersicht", 0));
        label->setText(QApplication::translate("BenutzerWindow", "Betrag", 0));
        label_2->setText(QApplication::translate("BenutzerWindow", "Datum", 0));
        label_3->setText(QApplication::translate("BenutzerWindow", "Kategorie", 0));
        label_4->setText(QApplication::translate("BenutzerWindow", "Beschreibung", 0));
        label_5->setText(QApplication::translate("BenutzerWindow", "Zahlungsart", 0));
        pushButton->setText(QApplication::translate("BenutzerWindow", "Hinzuf\303\274gen", 0));
        transaktionenTabWidget->setTabText(transaktionenTabWidget->indexOf(transaktionenNeuTab), QApplication::translate("BenutzerWindow", "Neue Transaktion", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(transaktionenTab), QApplication::translate("BenutzerWindow", "Transaktionen", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(zahlungsartenTab), QApplication::translate("BenutzerWindow", "Zahlungsarten", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(einstellungenTab), QApplication::translate("BenutzerWindow", "Einstellungen", 0));
        abmeldenLabel->setText(QApplication::translate("BenutzerWindow", "Benutzer <Benutzer> wirklich abmelden?", 0));
        logoutButton->setText(QApplication::translate("BenutzerWindow", "Abmelden", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(abmeldenTab), QApplication::translate("BenutzerWindow", "Abmelden", 0));
    } // retranslateUi

};

namespace Ui {
    class BenutzerWindow: public Ui_BenutzerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BENUTZERWINDOW_H
