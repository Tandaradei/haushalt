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

class Ui_UserWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *mainLayout;
    QTabWidget *mainTabWidget;
    QWidget *transaktionenTab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_14;
    QGridLayout *filterLayout;
    QComboBox *categoriesComboBox;
    QLabel *bisLabel;
    QDateEdit *bisDate;
    QPushButton *filterTransactionButton;
    QLabel *vonLabel;
    QComboBox *payMethodsComboBox;
    QLabel *zahlungsartLabel;
    QLabel *kategorieLabel;
    QDateEdit *vonDate;
    QTableWidget *transaktionenTable;
    QFormLayout *formLayout;
    QSpacerItem *verticalSpacer;
    QLabel *amountLabel;
    QLabel *dateLabel;
    QDateEdit *atDateEdit;
    QLabel *categoryLabel;
    QComboBox *atCategoriesComboBox;
    QLabel *paymethodLabel;
    QComboBox *atPayMethodsComboBox;
    QLabel *descriptionLabel;
    QTextEdit *atDescriptionTextEdit;
    QSpacerItem *verticalSpacer_2;
    QDoubleSpinBox *atAmountSpinner;
    QVBoxLayout *verticalLayout;
    QPushButton *addTransactionButton;
    QPushButton *editTransactionButton;
    QPushButton *deleteTransactionButton;
    QWidget *zahlungsartenTab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QListView *payMethodsList;
    QFormLayout *formLayout_3;
    QLabel *paymethodLabel_2;
    QLineEdit *payMethodNameField;
    QVBoxLayout *verticalLayout_4;
    QPushButton *addPayMethodButton;
    QPushButton *paymethodeditButton;
    QPushButton *deletePayMethodButton;
    QWidget *einstellungenTab;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout_2;
    QLabel *settingsnameLabel;
    QLineEdit *settingsNameField;
    QLabel *settingsbirthLabel;
    QDateEdit *settingsBirthdateField;
    QLabel *settingsoldpwLabel;
    QLineEdit *settingsOldPasswordField;
    QLabel *settingsnewpwLabel;
    QLineEdit *settingsNewPasswordField;
    QLabel *settingsnewpwwdhLabel;
    QLineEdit *settingsNewPasswordRepeatField;
    QLabel *label_12;
    QPushButton *settingsNewPasswordButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *settingsSaveButton;
    QWidget *userTab;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_11;
    QTableWidget *userTable;
    QFormLayout *formLayout_4;
    QLabel *userEmailLabel;
    QLineEdit *userEmailField;
    QLabel *userPasswordLabel;
    QLineEdit *userPasswordField;
    QLabel *userPasswordRepeatLabel;
    QLineEdit *userPasswordRepeatField;
    QPushButton *addUserButton;
    QPushButton *resetPasswordButton;
    QPushButton *deleteUserButton;
    QWidget *categoryTab;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_4;
    QListView *categoriesList;
    QFormLayout *formLayout_5;
    QLabel *categoryNameLabel;
    QLineEdit *categoryNameField;
    QVBoxLayout *verticalLayout_7;
    QPushButton *addCategoryButton;
    QPushButton *editCategoryButton;
    QPushButton *deleteCategoryButton;
    QWidget *standardPayMethodsTab;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_14;
    QListView *stanPayMethodsList;
    QHBoxLayout *horizontalLayout_5;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_8;
    QFormLayout *formLayout_6;
    QLabel *stanPayMethodNameLabel;
    QLineEdit *stanPayMethodNameField;
    QVBoxLayout *verticalLayout_10;
    QPushButton *addStanPayMethodButton;
    QPushButton *editStanPayMethodButton;
    QPushButton *deleteStanPayMethodButton;
    QWidget *logoutTab;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *abmeldenTabLayout;
    QLabel *abmeldenLabel;
    QPushButton *logoutButton;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *UserWindow)
    {
        if (UserWindow->objectName().isEmpty())
            UserWindow->setObjectName(QStringLiteral("UserWindow"));
        UserWindow->resize(1024, 600);
        centralWidget = new QWidget(UserWindow);
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
        mainTabWidget->setEnabled(true);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        mainTabWidget->setFont(font);
        mainTabWidget->setAutoFillBackground(false);
        mainTabWidget->setTabShape(QTabWidget::Rounded);
        mainTabWidget->setElideMode(Qt::ElideLeft);
        mainTabWidget->setDocumentMode(false);
        transaktionenTab = new QWidget();
        transaktionenTab->setObjectName(QStringLiteral("transaktionenTab"));
        verticalLayout_3 = new QVBoxLayout(transaktionenTab);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 2, 0, 0);
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        verticalLayout_14->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_14->setContentsMargins(0, 2, 0, 0);
        filterLayout = new QGridLayout();
        filterLayout->setSpacing(6);
        filterLayout->setObjectName(QStringLiteral("filterLayout"));
        filterLayout->setSizeConstraint(QLayout::SetNoConstraint);
        filterLayout->setContentsMargins(0, 2, 0, 0);
        categoriesComboBox = new QComboBox(transaktionenTab);
        categoriesComboBox->setObjectName(QStringLiteral("categoriesComboBox"));

        filterLayout->addWidget(categoriesComboBox, 1, 2, 1, 1);

        bisLabel = new QLabel(transaktionenTab);
        bisLabel->setObjectName(QStringLiteral("bisLabel"));

        filterLayout->addWidget(bisLabel, 0, 1, 1, 1);

        bisDate = new QDateEdit(transaktionenTab);
        bisDate->setObjectName(QStringLiteral("bisDate"));
        bisDate->setCalendarPopup(true);
        bisDate->setDate(QDate(2017, 6, 6));

        filterLayout->addWidget(bisDate, 1, 1, 1, 1);

        filterTransactionButton = new QPushButton(transaktionenTab);
        filterTransactionButton->setObjectName(QStringLiteral("filterTransactionButton"));
        QIcon icon;
        icon.addFile(QStringLiteral("resources/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        filterTransactionButton->setIcon(icon);

        filterLayout->addWidget(filterTransactionButton, 1, 4, 1, 1);

        vonLabel = new QLabel(transaktionenTab);
        vonLabel->setObjectName(QStringLiteral("vonLabel"));

        filterLayout->addWidget(vonLabel, 0, 0, 1, 1);

        payMethodsComboBox = new QComboBox(transaktionenTab);
        payMethodsComboBox->setObjectName(QStringLiteral("payMethodsComboBox"));

        filterLayout->addWidget(payMethodsComboBox, 1, 3, 1, 1);

        zahlungsartLabel = new QLabel(transaktionenTab);
        zahlungsartLabel->setObjectName(QStringLiteral("zahlungsartLabel"));

        filterLayout->addWidget(zahlungsartLabel, 0, 3, 1, 1);

        kategorieLabel = new QLabel(transaktionenTab);
        kategorieLabel->setObjectName(QStringLiteral("kategorieLabel"));

        filterLayout->addWidget(kategorieLabel, 0, 2, 1, 1);

        vonDate = new QDateEdit(transaktionenTab);
        vonDate->setObjectName(QStringLiteral("vonDate"));
        vonDate->setCalendarPopup(true);

        filterLayout->addWidget(vonDate, 1, 0, 1, 1);


        verticalLayout_14->addLayout(filterLayout);

        transaktionenTable = new QTableWidget(transaktionenTab);
        if (transaktionenTable->columnCount() < 6)
            transaktionenTable->setColumnCount(6);
        if (transaktionenTable->rowCount() < 100)
            transaktionenTable->setRowCount(100);
        transaktionenTable->setObjectName(QStringLiteral("transaktionenTable"));
        transaktionenTable->setMinimumSize(QSize(600, 0));
        transaktionenTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        transaktionenTable->setSelectionMode(QAbstractItemView::SingleSelection);
        transaktionenTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        transaktionenTable->setGridStyle(Qt::SolidLine);
        transaktionenTable->setSortingEnabled(true);
        transaktionenTable->setCornerButtonEnabled(true);
        transaktionenTable->setRowCount(100);
        transaktionenTable->setColumnCount(6);
        transaktionenTable->horizontalHeader()->setCascadingSectionResizes(true);
        transaktionenTable->horizontalHeader()->setMinimumSectionSize(50);
        transaktionenTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        transaktionenTable->horizontalHeader()->setStretchLastSection(true);
        transaktionenTable->verticalHeader()->setVisible(false);

        verticalLayout_14->addWidget(transaktionenTable);


        horizontalLayout_9->addLayout(verticalLayout_14);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetFixedSize);
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        formLayout->setContentsMargins(0, 12, -1, -1);
        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(0, QFormLayout::FieldRole, verticalSpacer);

        amountLabel = new QLabel(transaktionenTab);
        amountLabel->setObjectName(QStringLiteral("amountLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, amountLabel);

        dateLabel = new QLabel(transaktionenTab);
        dateLabel->setObjectName(QStringLiteral("dateLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, dateLabel);

        atDateEdit = new QDateEdit(transaktionenTab);
        atDateEdit->setObjectName(QStringLiteral("atDateEdit"));
        atDateEdit->setMinimumSize(QSize(80, 0));
        atDateEdit->setMaximumSize(QSize(80, 16777215));
        atDateEdit->setCalendarPopup(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, atDateEdit);

        categoryLabel = new QLabel(transaktionenTab);
        categoryLabel->setObjectName(QStringLiteral("categoryLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, categoryLabel);

        atCategoriesComboBox = new QComboBox(transaktionenTab);
        atCategoriesComboBox->setObjectName(QStringLiteral("atCategoriesComboBox"));
        atCategoriesComboBox->setMinimumSize(QSize(120, 0));
        atCategoriesComboBox->setMaximumSize(QSize(120, 16777215));

        formLayout->setWidget(3, QFormLayout::FieldRole, atCategoriesComboBox);

        paymethodLabel = new QLabel(transaktionenTab);
        paymethodLabel->setObjectName(QStringLiteral("paymethodLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, paymethodLabel);

        atPayMethodsComboBox = new QComboBox(transaktionenTab);
        atPayMethodsComboBox->setObjectName(QStringLiteral("atPayMethodsComboBox"));
        atPayMethodsComboBox->setMinimumSize(QSize(120, 0));
        atPayMethodsComboBox->setMaximumSize(QSize(120, 16777215));

        formLayout->setWidget(4, QFormLayout::FieldRole, atPayMethodsComboBox);

        descriptionLabel = new QLabel(transaktionenTab);
        descriptionLabel->setObjectName(QStringLiteral("descriptionLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, descriptionLabel);

        atDescriptionTextEdit = new QTextEdit(transaktionenTab);
        atDescriptionTextEdit->setObjectName(QStringLiteral("atDescriptionTextEdit"));
        atDescriptionTextEdit->setMinimumSize(QSize(200, 100));
        atDescriptionTextEdit->setMaximumSize(QSize(200, 100));

        formLayout->setWidget(5, QFormLayout::FieldRole, atDescriptionTextEdit);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(6, QFormLayout::FieldRole, verticalSpacer_2);

        atAmountSpinner = new QDoubleSpinBox(transaktionenTab);
        atAmountSpinner->setObjectName(QStringLiteral("atAmountSpinner"));
        atAmountSpinner->setMinimumSize(QSize(80, 0));
        atAmountSpinner->setMaximumSize(QSize(80, 16777215));
        atAmountSpinner->setMinimum(-1e+08);
        atAmountSpinner->setMaximum(1e+08);

        formLayout->setWidget(1, QFormLayout::FieldRole, atAmountSpinner);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        addTransactionButton = new QPushButton(transaktionenTab);
        addTransactionButton->setObjectName(QStringLiteral("addTransactionButton"));
        addTransactionButton->setEnabled(true);
        addTransactionButton->setMinimumSize(QSize(120, 25));
        addTransactionButton->setMaximumSize(QSize(120, 25));
        QIcon icon1;
        icon1.addFile(QStringLiteral("resources/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addTransactionButton->setIcon(icon1);

        verticalLayout->addWidget(addTransactionButton);

        editTransactionButton = new QPushButton(transaktionenTab);
        editTransactionButton->setObjectName(QStringLiteral("editTransactionButton"));
        editTransactionButton->setMinimumSize(QSize(120, 25));
        editTransactionButton->setMaximumSize(QSize(120, 25));
        editTransactionButton->setLayoutDirection(Qt::LeftToRight);
        QIcon icon2;
        icon2.addFile(QStringLiteral("resources/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        editTransactionButton->setIcon(icon2);
        editTransactionButton->setFlat(false);

        verticalLayout->addWidget(editTransactionButton);

        deleteTransactionButton = new QPushButton(transaktionenTab);
        deleteTransactionButton->setObjectName(QStringLiteral("deleteTransactionButton"));
        deleteTransactionButton->setMinimumSize(QSize(120, 25));
        deleteTransactionButton->setMaximumSize(QSize(120, 25));
        QIcon icon3;
        icon3.addFile(QStringLiteral("resources/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteTransactionButton->setIcon(icon3);

        verticalLayout->addWidget(deleteTransactionButton);


        formLayout->setLayout(7, QFormLayout::FieldRole, verticalLayout);


        horizontalLayout_9->addLayout(formLayout);


        verticalLayout_3->addLayout(horizontalLayout_9);

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

        gridLayout_2->addLayout(gridLayout_3, 1, 0, 1, 1);

        payMethodsList = new QListView(zahlungsartenTab);
        payMethodsList->setObjectName(QStringLiteral("payMethodsList"));
        payMethodsList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        payMethodsList->setSelectionBehavior(QAbstractItemView::SelectRows);

        gridLayout_2->addWidget(payMethodsList, 0, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);

        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_3->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_3->setFormAlignment(Qt::AlignCenter);
        paymethodLabel_2 = new QLabel(zahlungsartenTab);
        paymethodLabel_2->setObjectName(QStringLiteral("paymethodLabel_2"));
        paymethodLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, paymethodLabel_2);

        payMethodNameField = new QLineEdit(zahlungsartenTab);
        payMethodNameField->setObjectName(QStringLiteral("payMethodNameField"));
        payMethodNameField->setMinimumSize(QSize(200, 25));
        payMethodNameField->setMaximumSize(QSize(200, 25));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, payMethodNameField);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        addPayMethodButton = new QPushButton(zahlungsartenTab);
        addPayMethodButton->setObjectName(QStringLiteral("addPayMethodButton"));
        addPayMethodButton->setMinimumSize(QSize(120, 25));
        addPayMethodButton->setMaximumSize(QSize(120, 25));
        addPayMethodButton->setIcon(icon1);

        verticalLayout_4->addWidget(addPayMethodButton);

        paymethodeditButton = new QPushButton(zahlungsartenTab);
        paymethodeditButton->setObjectName(QStringLiteral("paymethodeditButton"));
        paymethodeditButton->setEnabled(false);
        paymethodeditButton->setMinimumSize(QSize(120, 25));
        paymethodeditButton->setMaximumSize(QSize(120, 25));
        paymethodeditButton->setIcon(icon2);

        verticalLayout_4->addWidget(paymethodeditButton);

        deletePayMethodButton = new QPushButton(zahlungsartenTab);
        deletePayMethodButton->setObjectName(QStringLiteral("deletePayMethodButton"));
        deletePayMethodButton->setMinimumSize(QSize(120, 25));
        deletePayMethodButton->setMaximumSize(QSize(120, 25));
        deletePayMethodButton->setIcon(icon3);

        verticalLayout_4->addWidget(deletePayMethodButton);


        formLayout_3->setLayout(1, QFormLayout::FieldRole, verticalLayout_4);


        horizontalLayout_2->addLayout(formLayout_3);


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

        settingsNameField = new QLineEdit(einstellungenTab);
        settingsNameField->setObjectName(QStringLiteral("settingsNameField"));
        settingsNameField->setMaximumSize(QSize(300, 16777215));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, settingsNameField);

        settingsbirthLabel = new QLabel(einstellungenTab);
        settingsbirthLabel->setObjectName(QStringLiteral("settingsbirthLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, settingsbirthLabel);

        settingsBirthdateField = new QDateEdit(einstellungenTab);
        settingsBirthdateField->setObjectName(QStringLiteral("settingsBirthdateField"));
        settingsBirthdateField->setMaximumSize(QSize(300, 16777215));
        settingsBirthdateField->setCorrectionMode(QAbstractSpinBox::CorrectToNearestValue);
        settingsBirthdateField->setCalendarPopup(true);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, settingsBirthdateField);

        settingsoldpwLabel = new QLabel(einstellungenTab);
        settingsoldpwLabel->setObjectName(QStringLiteral("settingsoldpwLabel"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, settingsoldpwLabel);

        settingsOldPasswordField = new QLineEdit(einstellungenTab);
        settingsOldPasswordField->setObjectName(QStringLiteral("settingsOldPasswordField"));
        settingsOldPasswordField->setMaximumSize(QSize(300, 16777215));
        settingsOldPasswordField->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, settingsOldPasswordField);

        settingsnewpwLabel = new QLabel(einstellungenTab);
        settingsnewpwLabel->setObjectName(QStringLiteral("settingsnewpwLabel"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, settingsnewpwLabel);

        settingsNewPasswordField = new QLineEdit(einstellungenTab);
        settingsNewPasswordField->setObjectName(QStringLiteral("settingsNewPasswordField"));
        settingsNewPasswordField->setMaximumSize(QSize(300, 16777215));
        settingsNewPasswordField->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(6, QFormLayout::FieldRole, settingsNewPasswordField);

        settingsnewpwwdhLabel = new QLabel(einstellungenTab);
        settingsnewpwwdhLabel->setObjectName(QStringLiteral("settingsnewpwwdhLabel"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, settingsnewpwwdhLabel);

        settingsNewPasswordRepeatField = new QLineEdit(einstellungenTab);
        settingsNewPasswordRepeatField->setObjectName(QStringLiteral("settingsNewPasswordRepeatField"));
        settingsNewPasswordRepeatField->setMaximumSize(QSize(300, 16777215));
        settingsNewPasswordRepeatField->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(7, QFormLayout::FieldRole, settingsNewPasswordRepeatField);

        label_12 = new QLabel(einstellungenTab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(16777215, 20));

        formLayout_2->setWidget(9, QFormLayout::FieldRole, label_12);

        settingsNewPasswordButton = new QPushButton(einstellungenTab);
        settingsNewPasswordButton->setObjectName(QStringLiteral("settingsNewPasswordButton"));
        settingsNewPasswordButton->setMinimumSize(QSize(120, 25));
        settingsNewPasswordButton->setMaximumSize(QSize(120, 25));
        QIcon icon6;
        icon6.addFile(QStringLiteral("resources/id.png"), QSize(), QIcon::Normal, QIcon::Off);
        settingsNewPasswordButton->setIcon(icon6);

        formLayout_2->setWidget(10, QFormLayout::FieldRole, settingsNewPasswordButton);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(3, QFormLayout::FieldRole, verticalSpacer_3);

        settingsSaveButton = new QPushButton(einstellungenTab);
        settingsSaveButton->setObjectName(QStringLiteral("settingsSaveButton"));
        settingsSaveButton->setMinimumSize(QSize(120, 25));
        settingsSaveButton->setMaximumSize(QSize(120, 25));
        settingsSaveButton->setIcon(icon2);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, settingsSaveButton);


        horizontalLayout_3->addLayout(formLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_6->addLayout(verticalLayout_5);

        mainTabWidget->addTab(einstellungenTab, icon, QString());
        userTab = new QWidget();
        userTab->setObjectName(QStringLiteral("userTab"));
        userTab->setEnabled(true);
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setBold(false);
        font1.setWeight(50);
        userTab->setFont(font1);
        userTab->setAutoFillBackground(false);
        verticalLayout_9 = new QVBoxLayout(userTab);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(9, 9, 9, 9);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        userTable = new QTableWidget(userTab);
        if (userTable->columnCount() < 5)
            userTable->setColumnCount(5);
        if (userTable->rowCount() < 20)
            userTable->setRowCount(20);
        userTable->setObjectName(QStringLiteral("userTable"));
        userTable->setMinimumSize(QSize(600, 0));
        userTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        userTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        userTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        userTable->setTabKeyNavigation(false);
        userTable->setSelectionMode(QAbstractItemView::SingleSelection);
        userTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        userTable->setRowCount(20);
        userTable->setColumnCount(5);
        userTable->horizontalHeader()->setMinimumSectionSize(50);

        horizontalLayout_11->addWidget(userTable);

        formLayout_4 = new QFormLayout();
        formLayout_4->setSpacing(6);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_4->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_4->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        userEmailLabel = new QLabel(userTab);
        userEmailLabel->setObjectName(QStringLiteral("userEmailLabel"));
        userEmailLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_4->setWidget(3, QFormLayout::LabelRole, userEmailLabel);

        userEmailField = new QLineEdit(userTab);
        userEmailField->setObjectName(QStringLiteral("userEmailField"));
        userEmailField->setMaximumSize(QSize(200, 16777215));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, userEmailField);

        userPasswordLabel = new QLabel(userTab);
        userPasswordLabel->setObjectName(QStringLiteral("userPasswordLabel"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, userPasswordLabel);

        userPasswordField = new QLineEdit(userTab);
        userPasswordField->setObjectName(QStringLiteral("userPasswordField"));
        userPasswordField->setMaximumSize(QSize(200, 16777215));
        userPasswordField->setEchoMode(QLineEdit::Password);

        formLayout_4->setWidget(4, QFormLayout::FieldRole, userPasswordField);

        userPasswordRepeatLabel = new QLabel(userTab);
        userPasswordRepeatLabel->setObjectName(QStringLiteral("userPasswordRepeatLabel"));

        formLayout_4->setWidget(5, QFormLayout::LabelRole, userPasswordRepeatLabel);

        userPasswordRepeatField = new QLineEdit(userTab);
        userPasswordRepeatField->setObjectName(QStringLiteral("userPasswordRepeatField"));
        userPasswordRepeatField->setMaximumSize(QSize(200, 16777215));
        userPasswordRepeatField->setEchoMode(QLineEdit::Password);

        formLayout_4->setWidget(5, QFormLayout::FieldRole, userPasswordRepeatField);

        addUserButton = new QPushButton(userTab);
        addUserButton->setObjectName(QStringLiteral("addUserButton"));
        addUserButton->setMinimumSize(QSize(120, 25));
        addUserButton->setMaximumSize(QSize(120, 25));
        addUserButton->setIcon(icon1);

        formLayout_4->setWidget(6, QFormLayout::FieldRole, addUserButton);

        resetPasswordButton = new QPushButton(userTab);
        resetPasswordButton->setObjectName(QStringLiteral("resetPasswordButton"));
        resetPasswordButton->setMinimumSize(QSize(120, 25));
        resetPasswordButton->setMaximumSize(QSize(120, 25));
        resetPasswordButton->setIcon(icon2);

        formLayout_4->setWidget(7, QFormLayout::FieldRole, resetPasswordButton);

        deleteUserButton = new QPushButton(userTab);
        deleteUserButton->setObjectName(QStringLiteral("deleteUserButton"));
        deleteUserButton->setMinimumSize(QSize(120, 25));
        deleteUserButton->setMaximumSize(QSize(120, 25));
        deleteUserButton->setIcon(icon3);

        formLayout_4->setWidget(8, QFormLayout::FieldRole, deleteUserButton);


        horizontalLayout_11->addLayout(formLayout_4);


        horizontalLayout_10->addLayout(horizontalLayout_11);


        verticalLayout_9->addLayout(horizontalLayout_10);

        mainTabWidget->addTab(userTab, QString());
        categoryTab = new QWidget();
        categoryTab->setObjectName(QStringLiteral("categoryTab"));
        categoryTab->setEnabled(true);
        verticalLayout_13 = new QVBoxLayout(categoryTab);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        categoriesList = new QListView(categoryTab);
        categoriesList->setObjectName(QStringLiteral("categoriesList"));
        categoriesList->setMaximumSize(QSize(16777215, 16777215));
        categoriesList->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        categoriesList->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        horizontalLayout_4->addWidget(categoriesList);

        formLayout_5 = new QFormLayout();
        formLayout_5->setSpacing(6);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_5->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_5->setFormAlignment(Qt::AlignCenter);
        categoryNameLabel = new QLabel(categoryTab);
        categoryNameLabel->setObjectName(QStringLiteral("categoryNameLabel"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, categoryNameLabel);

        categoryNameField = new QLineEdit(categoryTab);
        categoryNameField->setObjectName(QStringLiteral("categoryNameField"));
        categoryNameField->setMinimumSize(QSize(200, 0));
        categoryNameField->setMaximumSize(QSize(200, 16777215));
        categoryNameField->setAlignment(Qt::AlignCenter);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, categoryNameField);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        addCategoryButton = new QPushButton(categoryTab);
        addCategoryButton->setObjectName(QStringLiteral("addCategoryButton"));
        addCategoryButton->setMinimumSize(QSize(100, 25));
        addCategoryButton->setMaximumSize(QSize(120, 25));
        addCategoryButton->setLayoutDirection(Qt::LeftToRight);
        addCategoryButton->setIcon(icon1);

        verticalLayout_7->addWidget(addCategoryButton);

        editCategoryButton = new QPushButton(categoryTab);
        editCategoryButton->setObjectName(QStringLiteral("editCategoryButton"));
        editCategoryButton->setEnabled(false);
        editCategoryButton->setMinimumSize(QSize(120, 25));
        editCategoryButton->setMaximumSize(QSize(120, 25));
        editCategoryButton->setIcon(icon2);

        verticalLayout_7->addWidget(editCategoryButton);

        deleteCategoryButton = new QPushButton(categoryTab);
        deleteCategoryButton->setObjectName(QStringLiteral("deleteCategoryButton"));
        deleteCategoryButton->setMinimumSize(QSize(120, 25));
        deleteCategoryButton->setMaximumSize(QSize(120, 25));
        deleteCategoryButton->setIcon(icon3);

        verticalLayout_7->addWidget(deleteCategoryButton);


        formLayout_5->setLayout(1, QFormLayout::FieldRole, verticalLayout_7);


        horizontalLayout_4->addLayout(formLayout_5);


        horizontalLayout_12->addLayout(horizontalLayout_4);


        verticalLayout_13->addLayout(horizontalLayout_12);

        mainTabWidget->addTab(categoryTab, QString());
        standardPayMethodsTab = new QWidget();
        standardPayMethodsTab->setObjectName(QStringLiteral("standardPayMethodsTab"));
        standardPayMethodsTab->setEnabled(true);
        verticalLayout_11 = new QVBoxLayout(standardPayMethodsTab);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        stanPayMethodsList = new QListView(standardPayMethodsTab);
        stanPayMethodsList->setObjectName(QStringLiteral("stanPayMethodsList"));
        stanPayMethodsList->setMinimumSize(QSize(0, 0));
        stanPayMethodsList->setMaximumSize(QSize(16777215, 16777215));
        stanPayMethodsList->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        stanPayMethodsList->setEditTriggers(QAbstractItemView::NoEditTriggers);

        horizontalLayout_14->addWidget(stanPayMethodsList);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));

        gridLayout_7->addLayout(gridLayout_8, 1, 0, 1, 1);


        horizontalLayout_5->addLayout(gridLayout_7);

        formLayout_6 = new QFormLayout();
        formLayout_6->setSpacing(6);
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        formLayout_6->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout_6->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_6->setFormAlignment(Qt::AlignCenter);
        stanPayMethodNameLabel = new QLabel(standardPayMethodsTab);
        stanPayMethodNameLabel->setObjectName(QStringLiteral("stanPayMethodNameLabel"));
        stanPayMethodNameLabel->setMaximumSize(QSize(16777215, 200));
        stanPayMethodNameLabel->setFrameShape(QFrame::NoFrame);
        stanPayMethodNameLabel->setAlignment(Qt::AlignCenter);

        formLayout_6->setWidget(0, QFormLayout::LabelRole, stanPayMethodNameLabel);

        stanPayMethodNameField = new QLineEdit(standardPayMethodsTab);
        stanPayMethodNameField->setObjectName(QStringLiteral("stanPayMethodNameField"));
        stanPayMethodNameField->setMinimumSize(QSize(200, 0));
        stanPayMethodNameField->setMaximumSize(QSize(200, 16777215));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, stanPayMethodNameField);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        addStanPayMethodButton = new QPushButton(standardPayMethodsTab);
        addStanPayMethodButton->setObjectName(QStringLiteral("addStanPayMethodButton"));
        addStanPayMethodButton->setMinimumSize(QSize(120, 25));
        addStanPayMethodButton->setMaximumSize(QSize(120, 25));
        addStanPayMethodButton->setIcon(icon1);

        verticalLayout_10->addWidget(addStanPayMethodButton);

        editStanPayMethodButton = new QPushButton(standardPayMethodsTab);
        editStanPayMethodButton->setObjectName(QStringLiteral("editStanPayMethodButton"));
        editStanPayMethodButton->setEnabled(false);
        editStanPayMethodButton->setMinimumSize(QSize(120, 25));
        editStanPayMethodButton->setMaximumSize(QSize(120, 25));
        editStanPayMethodButton->setIcon(icon2);

        verticalLayout_10->addWidget(editStanPayMethodButton);

        deleteStanPayMethodButton = new QPushButton(standardPayMethodsTab);
        deleteStanPayMethodButton->setObjectName(QStringLiteral("deleteStanPayMethodButton"));
        deleteStanPayMethodButton->setMinimumSize(QSize(120, 25));
        deleteStanPayMethodButton->setMaximumSize(QSize(120, 25));
        deleteStanPayMethodButton->setIcon(icon3);

        verticalLayout_10->addWidget(deleteStanPayMethodButton);


        formLayout_6->setLayout(1, QFormLayout::FieldRole, verticalLayout_10);


        horizontalLayout_5->addLayout(formLayout_6);


        horizontalLayout_14->addLayout(horizontalLayout_5);


        verticalLayout_11->addLayout(horizontalLayout_14);

        mainTabWidget->addTab(standardPayMethodsTab, QString());
        logoutTab = new QWidget();
        logoutTab->setObjectName(QStringLiteral("logoutTab"));
        verticalLayout_8 = new QVBoxLayout(logoutTab);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        abmeldenTabLayout = new QVBoxLayout();
        abmeldenTabLayout->setSpacing(6);
        abmeldenTabLayout->setObjectName(QStringLiteral("abmeldenTabLayout"));
        abmeldenLabel = new QLabel(logoutTab);
        abmeldenLabel->setObjectName(QStringLiteral("abmeldenLabel"));
        abmeldenLabel->setMaximumSize(QSize(16777215, 50));
        abmeldenLabel->setScaledContents(false);
        abmeldenLabel->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        abmeldenTabLayout->addWidget(abmeldenLabel, 0, Qt::AlignBottom);

        logoutButton = new QPushButton(logoutTab);
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

        mainTabWidget->addTab(logoutTab, icon7, QString());

        mainLayout->addWidget(mainTabWidget);


        horizontalLayout->addLayout(mainLayout);

        UserWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(UserWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 21));
        UserWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(UserWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        UserWindow->setStatusBar(statusBar);

        retranslateUi(UserWindow);

        mainTabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(UserWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UserWindow)
    {
        UserWindow->setWindowTitle(QApplication::translate("UserWindow", "<User>", 0));
        bisLabel->setText(QApplication::translate("UserWindow", "Bis", 0));
        filterTransactionButton->setText(QApplication::translate("UserWindow", "Filter anwenden", 0));
        vonLabel->setText(QApplication::translate("UserWindow", "Von", 0));
        zahlungsartLabel->setText(QApplication::translate("UserWindow", "Zahlungsart", 0));
        kategorieLabel->setText(QApplication::translate("UserWindow", "Kategorie", 0));
        amountLabel->setText(QApplication::translate("UserWindow", "Betrag", 0));
        dateLabel->setText(QApplication::translate("UserWindow", "Datum", 0));
        categoryLabel->setText(QApplication::translate("UserWindow", "Kategorie", 0));
        paymethodLabel->setText(QApplication::translate("UserWindow", "Zahlungsart", 0));
        descriptionLabel->setText(QApplication::translate("UserWindow", "Beschreibung", 0));
        addTransactionButton->setText(QApplication::translate("UserWindow", "Neu", 0));
        editTransactionButton->setText(QApplication::translate("UserWindow", "Bearbeiten", 0));
        deleteTransactionButton->setText(QApplication::translate("UserWindow", "Entfernen", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(transaktionenTab), QApplication::translate("UserWindow", "Transaktionen", 0));
        paymethodLabel_2->setText(QApplication::translate("UserWindow", "Name", 0));
        addPayMethodButton->setText(QApplication::translate("UserWindow", "Neu", 0));
        paymethodeditButton->setText(QApplication::translate("UserWindow", "Bearbeiten", 0));
        deletePayMethodButton->setText(QApplication::translate("UserWindow", "Entfernen", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(zahlungsartenTab), QApplication::translate("UserWindow", "Zahlungsarten", 0));
        settingsnameLabel->setText(QApplication::translate("UserWindow", "Name", 0));
        settingsbirthLabel->setText(QApplication::translate("UserWindow", "Geburtsdatum", 0));
        settingsoldpwLabel->setText(QApplication::translate("UserWindow", "Altes Passwort", 0));
        settingsnewpwLabel->setText(QApplication::translate("UserWindow", "Neues Passwort", 0));
        settingsnewpwwdhLabel->setText(QApplication::translate("UserWindow", "Neues Passwort wiederholen", 0));
        label_12->setText(QString());
        settingsNewPasswordButton->setText(QApplication::translate("UserWindow", "Passwort \303\244ndern", 0));
        settingsSaveButton->setText(QApplication::translate("UserWindow", "Speichern", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(einstellungenTab), QApplication::translate("UserWindow", "Einstellungen", 0));
        userEmailLabel->setText(QApplication::translate("UserWindow", "E-Mail", 0));
        userPasswordLabel->setText(QApplication::translate("UserWindow", "Neues Kennwort", 0));
        userPasswordRepeatLabel->setText(QApplication::translate("UserWindow", "Neues Kennwort wiederholen", 0));
        addUserButton->setText(QApplication::translate("UserWindow", "Neu", 0));
        resetPasswordButton->setText(QApplication::translate("UserWindow", "Passwort \303\244ndern", 0));
        deleteUserButton->setText(QApplication::translate("UserWindow", "Entfernen", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(userTab), QApplication::translate("UserWindow", "Benutzer", 0));
        categoryNameLabel->setText(QApplication::translate("UserWindow", "Name", 0));
        addCategoryButton->setText(QApplication::translate("UserWindow", "Neu", 0));
        editCategoryButton->setText(QApplication::translate("UserWindow", "Bearbeiten", 0));
        deleteCategoryButton->setText(QApplication::translate("UserWindow", "Entfernen", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(categoryTab), QApplication::translate("UserWindow", "Kategorien", 0));
        stanPayMethodNameLabel->setText(QApplication::translate("UserWindow", "Name", 0));
        addStanPayMethodButton->setText(QApplication::translate("UserWindow", "Neu", 0));
        editStanPayMethodButton->setText(QApplication::translate("UserWindow", "Bearbeiten", 0));
        deleteStanPayMethodButton->setText(QApplication::translate("UserWindow", "Entfernen", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(standardPayMethodsTab), QApplication::translate("UserWindow", "Standardzahlungsarten", 0));
        abmeldenLabel->setText(QApplication::translate("UserWindow", "Benutzer <Benutzer> wirklich abmelden?", 0));
        logoutButton->setText(QApplication::translate("UserWindow", "Abmelden", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(logoutTab), QApplication::translate("UserWindow", "Abmelden", 0));
    } // retranslateUi

};

namespace Ui {
    class UserWindow: public Ui_UserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
