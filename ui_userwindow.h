/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
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
    QLabel *amountLabel;
    QDoubleSpinBox *amountdoubleSpinBox;
    QLabel *dateLabel;
    QDateEdit *dateEdit;
    QLabel *categoryLabel;
    QComboBox *categoryDropdown;
    QLabel *descriptionLabel;
    QTextEdit *descriptionTextedit;
    QLabel *paymethodLabel;
    QComboBox *paymethodDropdwon;
    QPushButton *addButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *zahlungsartenTab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QPushButton *paymethodeditButton;
    QPushButton *paymethoddeleteButton;
    QListView *listView;
    QGridLayout *gridLayout;
    QLineEdit *paymethodField;
    QLabel *paymethodLabel_2;
    QPushButton *paymethodaddButton;
    QWidget *einstellungenTab;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout_2;
    QLabel *settingsnameLabel;
    QLineEdit *settingsnameField;
    QLabel *settingsbirthLabel;
    QDateEdit *dateEdit_2;
    QLabel *settingsoldpwLabel;
    QLineEdit *settingsoldpwField;
    QLabel *settingsnewpwLabel;
    QLineEdit *settingsnewpwField;
    QLabel *settingsnewpwwdhLabel;
    QLineEdit *settingsnewpwwdhField;
    QLabel *label_12;
    QPushButton *settingsacceptButton;
    QSpacerItem *verticalSpacer_3;
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
        amountLabel = new QLabel(transaktionenNeuTab);
        amountLabel->setObjectName(QStringLiteral("amountLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, amountLabel);

        amountdoubleSpinBox = new QDoubleSpinBox(transaktionenNeuTab);
        amountdoubleSpinBox->setObjectName(QStringLiteral("amountdoubleSpinBox"));
        amountdoubleSpinBox->setMinimumSize(QSize(80, 0));
        amountdoubleSpinBox->setMaximumSize(QSize(80, 16777215));
        amountdoubleSpinBox->setMinimum(-1e+08);
        amountdoubleSpinBox->setMaximum(1e+08);

        formLayout->setWidget(1, QFormLayout::FieldRole, amountdoubleSpinBox);

        dateLabel = new QLabel(transaktionenNeuTab);
        dateLabel->setObjectName(QStringLiteral("dateLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, dateLabel);

        dateEdit = new QDateEdit(transaktionenNeuTab);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setMinimumSize(QSize(80, 0));
        dateEdit->setMaximumSize(QSize(80, 16777215));
        dateEdit->setCalendarPopup(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, dateEdit);

        categoryLabel = new QLabel(transaktionenNeuTab);
        categoryLabel->setObjectName(QStringLiteral("categoryLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, categoryLabel);

        categoryDropdown = new QComboBox(transaktionenNeuTab);
        categoryDropdown->setObjectName(QStringLiteral("categoryDropdown"));
        categoryDropdown->setMinimumSize(QSize(80, 0));
        categoryDropdown->setMaximumSize(QSize(100, 16777215));

        formLayout->setWidget(3, QFormLayout::FieldRole, categoryDropdown);

        descriptionLabel = new QLabel(transaktionenNeuTab);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, descriptionLabel);

        descriptionTextedit = new QTextEdit(transaktionenNeuTab);
        descriptionTextedit->setObjectName(QStringLiteral("descriptionTextedit"));
        descriptionTextedit->setMaximumSize(QSize(16777215, 100));

        formLayout->setWidget(5, QFormLayout::FieldRole, descriptionTextedit);

        paymethodLabel = new QLabel(transaktionenNeuTab);
        paymethodLabel->setObjectName(QStringLiteral("paymethodLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, paymethodLabel);

        paymethodDropdwon = new QComboBox(transaktionenNeuTab);
        paymethodDropdwon->setObjectName(QStringLiteral("paymethodDropdwon"));
        paymethodDropdwon->setMinimumSize(QSize(80, 0));
        paymethodDropdwon->setMaximumSize(QSize(80, 16777215));

        formLayout->setWidget(4, QFormLayout::FieldRole, paymethodDropdwon);

        addButton = new QPushButton(transaktionenNeuTab);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral("resources/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon3);

        formLayout->setWidget(7, QFormLayout::FieldRole, addButton);

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
        verticalLayout_2 = new QVBoxLayout(zahlungsartenTab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        paymethodeditButton = new QPushButton(zahlungsartenTab);
        paymethodeditButton->setObjectName(QStringLiteral("paymethodeditButton"));
        paymethodeditButton->setMaximumSize(QSize(100, 16777215));
        paymethodeditButton->setIcon(icon);

        gridLayout_3->addWidget(paymethodeditButton, 0, 0, 1, 1);

        paymethoddeleteButton = new QPushButton(zahlungsartenTab);
        paymethoddeleteButton->setObjectName(QStringLiteral("paymethoddeleteButton"));
        paymethoddeleteButton->setMaximumSize(QSize(100, 16777215));
        paymethoddeleteButton->setIcon(icon1);

        gridLayout_3->addWidget(paymethoddeleteButton, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 1, 0, 1, 1);

        listView = new QListView(zahlungsartenTab);
        listView->setObjectName(QStringLiteral("listView"));

        gridLayout_2->addWidget(listView, 0, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        paymethodField = new QLineEdit(zahlungsartenTab);
        paymethodField->setObjectName(QStringLiteral("paymethodField"));

        gridLayout->addWidget(paymethodField, 2, 0, 1, 1);

        paymethodLabel_2 = new QLabel(zahlungsartenTab);
        paymethodLabel_2->setObjectName(QStringLiteral("paymethodLabel_2"));
        paymethodLabel_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(paymethodLabel_2, 1, 0, 1, 1, Qt::AlignBottom);

        paymethodaddButton = new QPushButton(zahlungsartenTab);
        paymethodaddButton->setObjectName(QStringLiteral("paymethodaddButton"));
        paymethodaddButton->setMaximumSize(QSize(100, 16777215));
        paymethodaddButton->setIcon(icon3);

        gridLayout->addWidget(paymethodaddButton, 3, 0, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->setRowMinimumHeight(1, 176);
        gridLayout->setRowMinimumHeight(2, 100);
        gridLayout->setRowMinimumHeight(3, 176);

        horizontalLayout_2->addLayout(gridLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        QIcon icon5;
        icon5.addFile(QStringLiteral("resources/paymethod.png"), QSize(), QIcon::Normal, QIcon::Off);
        mainTabWidget->addTab(zahlungsartenTab, icon5, QString());
        einstellungenTab = new QWidget();
        einstellungenTab->setObjectName(QStringLiteral("einstellungenTab"));
        verticalLayout_6 = new QVBoxLayout(einstellungenTab);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        settingsnameLabel = new QLabel(einstellungenTab);
        settingsnameLabel->setObjectName(QStringLiteral("settingsnameLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, settingsnameLabel);

        settingsnameField = new QLineEdit(einstellungenTab);
        settingsnameField->setObjectName(QStringLiteral("settingsnameField"));
        settingsnameField->setMaximumSize(QSize(300, 16777215));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, settingsnameField);

        settingsbirthLabel = new QLabel(einstellungenTab);
        settingsbirthLabel->setObjectName(QStringLiteral("settingsbirthLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, settingsbirthLabel);

        dateEdit_2 = new QDateEdit(einstellungenTab);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setMaximumSize(QSize(300, 16777215));
        dateEdit_2->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        dateEdit_2->setCalendarPopup(true);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, dateEdit_2);

        settingsoldpwLabel = new QLabel(einstellungenTab);
        settingsoldpwLabel->setObjectName(QStringLiteral("settingsoldpwLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, settingsoldpwLabel);

        settingsoldpwField = new QLineEdit(einstellungenTab);
        settingsoldpwField->setObjectName(QStringLiteral("settingsoldpwField"));
        settingsoldpwField->setMaximumSize(QSize(300, 16777215));
        settingsoldpwField->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, settingsoldpwField);

        settingsnewpwLabel = new QLabel(einstellungenTab);
        settingsnewpwLabel->setObjectName(QStringLiteral("settingsnewpwLabel"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, settingsnewpwLabel);

        settingsnewpwField = new QLineEdit(einstellungenTab);
        settingsnewpwField->setObjectName(QStringLiteral("settingsnewpwField"));
        settingsnewpwField->setMaximumSize(QSize(300, 16777215));
        settingsnewpwField->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, settingsnewpwField);

        settingsnewpwwdhLabel = new QLabel(einstellungenTab);
        settingsnewpwwdhLabel->setObjectName(QStringLiteral("settingsnewpwwdhLabel"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, settingsnewpwwdhLabel);

        settingsnewpwwdhField = new QLineEdit(einstellungenTab);
        settingsnewpwwdhField->setObjectName(QStringLiteral("settingsnewpwwdhField"));
        settingsnewpwwdhField->setMaximumSize(QSize(300, 16777215));
        settingsnewpwwdhField->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, settingsnewpwwdhField);

        label_12 = new QLabel(einstellungenTab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(16777215, 20));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, label_12);

        settingsacceptButton = new QPushButton(einstellungenTab);
        settingsacceptButton->setObjectName(QStringLiteral("settingsacceptButton"));
        settingsacceptButton->setMaximumSize(QSize(100, 16777215));
        QIcon icon6;
        icon6.addFile(QStringLiteral("resources/check.png"), QSize(), QIcon::Normal, QIcon::Off);
        settingsacceptButton->setIcon(icon6);

        formLayout_2->setWidget(7, QFormLayout::FieldRole, settingsacceptButton);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(3, QFormLayout::FieldRole, verticalSpacer_3);


        horizontalLayout_3->addLayout(formLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_6->addLayout(verticalLayout_5);

        QIcon icon7;
        icon7.addFile(QStringLiteral("resources/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        mainTabWidget->addTab(einstellungenTab, icon7, QString());
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
        QIcon icon8;
        icon8.addFile(QStringLiteral("resources/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        logoutButton->setIcon(icon8);
        logoutButton->setFlat(false);

        abmeldenTabLayout->addWidget(logoutButton, 0, Qt::AlignHCenter|Qt::AlignTop);


        verticalLayout_8->addLayout(abmeldenTabLayout);

        mainTabWidget->addTab(abmeldenTab, icon8, QString());

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

        mainTabWidget->setCurrentIndex(2);
        transaktionenTabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(BenutzerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BenutzerWindow)
    {
        BenutzerWindow->setWindowTitle(QApplication::translate("BenutzerWindow", "BenutzerWindow", 0));
        zahlungsartLabel->setText(QApplication::translate("BenutzerWindow", "Zahlungsart", 0));
        kategorieLabel->setText(QApplication::translate("BenutzerWindow", "Kategorie", 0));
        bisLabel->setText(QApplication::translate("BenutzerWindow", "Bis", 0));
        vonLabel->setText(QApplication::translate("BenutzerWindow", "Von", 0));
        editButton->setText(QApplication::translate("BenutzerWindow", "Bearbeiten", 0));
        deleteButton->setText(QApplication::translate("BenutzerWindow", "Entfernen", 0));
        transaktionenTabWidget->setTabText(transaktionenTabWidget->indexOf(transaktionenListeTab), QApplication::translate("BenutzerWindow", "\303\234bersicht", 0));
        amountLabel->setText(QApplication::translate("BenutzerWindow", "Betrag", 0));
        dateLabel->setText(QApplication::translate("BenutzerWindow", "Datum", 0));
        categoryLabel->setText(QApplication::translate("BenutzerWindow", "Kategorie", 0));
        descriptionLabel->setText(QApplication::translate("BenutzerWindow", "Beschreibung", 0));
        paymethodLabel->setText(QApplication::translate("BenutzerWindow", "Zahlungsart", 0));
        addButton->setText(QApplication::translate("BenutzerWindow", "Hinzuf\303\274gen", 0));
        transaktionenTabWidget->setTabText(transaktionenTabWidget->indexOf(transaktionenNeuTab), QApplication::translate("BenutzerWindow", "Neue Transaktion", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(transaktionenTab), QApplication::translate("BenutzerWindow", "Transaktionen", 0));
        paymethodeditButton->setText(QApplication::translate("BenutzerWindow", "Bearbeiten", 0));
        paymethoddeleteButton->setText(QApplication::translate("BenutzerWindow", "Entfernen", 0));
        paymethodLabel_2->setText(QApplication::translate("BenutzerWindow", "Bitte geben sie die Zahlungsart an die sie hinzuf\303\274gen  m\303\266chten", 0));
        paymethodaddButton->setText(QApplication::translate("BenutzerWindow", "Hinzuf\303\274gen", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(zahlungsartenTab), QApplication::translate("BenutzerWindow", "Zahlungsarten", 0));
        settingsnameLabel->setText(QApplication::translate("BenutzerWindow", "Name", 0));
        settingsbirthLabel->setText(QApplication::translate("BenutzerWindow", "Geburtsdatum", 0));
        settingsoldpwLabel->setText(QApplication::translate("BenutzerWindow", "Altes Passwort", 0));
        settingsnewpwLabel->setText(QApplication::translate("BenutzerWindow", "Neues Passwort", 0));
        settingsnewpwwdhLabel->setText(QApplication::translate("BenutzerWindow", "Neues Passwort wiederholen", 0));
        label_12->setText(QString());
        settingsacceptButton->setText(QApplication::translate("BenutzerWindow", "Best\303\244tigen", 0));
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

#endif // UI_USERWINDOW_H