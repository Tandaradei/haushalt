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
#include <QtWidgets/QFrame>
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
    QHBoxLayout *horizontalLayout_6;
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
    QHBoxLayout *horizontalLayout_8;
    QPushButton *addPayMethodButton;
    QPushButton *paymethodeditButton;
    QPushButton *deletePayMethodButton;
    QWidget *einstellungenTab;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout_2;
    QLabel *settingsnameLabel;
    QLineEdit *settingsnameField;
    QLabel *settingsbirthLabel;
    QDateEdit *settingsBirthdateField;
    QLabel *settingsoldpwLabel;
    QLineEdit *settingsoldpwField;
    QLabel *settingsnewpwLabel;
    QLineEdit *settingsnewpwField;
    QLabel *settingsnewpwwdhLabel;
    QLineEdit *settingsnewpwwdhField;
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
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout_5;
    QListView *categorylistView;
    QGridLayout *gridLayout_4;
    QLabel *delcategoryLabel;
    QLineEdit *addcategoryField;
    QPushButton *delcategoryButton;
    QSpacerItem *verticalSpacer_4;
    QLabel *addcategoryLabel;
    QPushButton *addcategoryButton;
    QFrame *line;
    QWidget *standardPayMethodsTab;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_5;
    QGridLayout *gridLayout_7;
    QListView *stanpaylistView;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_6;
    QLineEdit *stanpayaddField;
    QLabel *stanpayaddLabel;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *stanpayaddButton;
    QPushButton *stanpaychangeButton;
    QPushButton *stanpaydelButton;
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

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetMaximumSize);
        addTransactionButton = new QPushButton(transaktionenTab);
        addTransactionButton->setObjectName(QStringLiteral("addTransactionButton"));
        addTransactionButton->setEnabled(true);
        addTransactionButton->setMinimumSize(QSize(100, 25));
        addTransactionButton->setMaximumSize(QSize(100, 25));
        QIcon icon1;
        icon1.addFile(QStringLiteral("resources/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addTransactionButton->setIcon(icon1);

        horizontalLayout_6->addWidget(addTransactionButton);

        editTransactionButton = new QPushButton(transaktionenTab);
        editTransactionButton->setObjectName(QStringLiteral("editTransactionButton"));
        editTransactionButton->setMinimumSize(QSize(100, 25));
        editTransactionButton->setMaximumSize(QSize(100, 25));
        editTransactionButton->setLayoutDirection(Qt::LeftToRight);
        QIcon icon2;
        icon2.addFile(QStringLiteral("resources/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        editTransactionButton->setIcon(icon2);
        editTransactionButton->setFlat(false);

        horizontalLayout_6->addWidget(editTransactionButton);

        deleteTransactionButton = new QPushButton(transaktionenTab);
        deleteTransactionButton->setObjectName(QStringLiteral("deleteTransactionButton"));
        deleteTransactionButton->setMinimumSize(QSize(100, 25));
        deleteTransactionButton->setMaximumSize(QSize(100, 25));
        QIcon icon3;
        icon3.addFile(QStringLiteral("resources/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteTransactionButton->setIcon(icon3);

        horizontalLayout_6->addWidget(deleteTransactionButton);


        formLayout->setLayout(7, QFormLayout::FieldRole, horizontalLayout_6);


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
        formLayout_3->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        paymethodLabel_2 = new QLabel(zahlungsartenTab);
        paymethodLabel_2->setObjectName(QStringLiteral("paymethodLabel_2"));
        paymethodLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, paymethodLabel_2);

        payMethodNameField = new QLineEdit(zahlungsartenTab);
        payMethodNameField->setObjectName(QStringLiteral("payMethodNameField"));
        payMethodNameField->setMinimumSize(QSize(200, 25));
        payMethodNameField->setMaximumSize(QSize(200, 25));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, payMethodNameField);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        addPayMethodButton = new QPushButton(zahlungsartenTab);
        addPayMethodButton->setObjectName(QStringLiteral("addPayMethodButton"));
        addPayMethodButton->setMaximumSize(QSize(100, 16777215));
        addPayMethodButton->setIcon(icon1);

        horizontalLayout_8->addWidget(addPayMethodButton);

        paymethodeditButton = new QPushButton(zahlungsartenTab);
        paymethodeditButton->setObjectName(QStringLiteral("paymethodeditButton"));
        paymethodeditButton->setEnabled(false);
        paymethodeditButton->setMaximumSize(QSize(100, 16777215));
        paymethodeditButton->setIcon(icon2);

        horizontalLayout_8->addWidget(paymethodeditButton);

        deletePayMethodButton = new QPushButton(zahlungsartenTab);
        deletePayMethodButton->setObjectName(QStringLiteral("deletePayMethodButton"));
        deletePayMethodButton->setMaximumSize(QSize(100, 16777215));
        deletePayMethodButton->setIcon(icon3);

        horizontalLayout_8->addWidget(deletePayMethodButton);


        formLayout_3->setLayout(1, QFormLayout::FieldRole, horizontalLayout_8);


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

        settingsnameField = new QLineEdit(einstellungenTab);
        settingsnameField->setObjectName(QStringLiteral("settingsnameField"));
        settingsnameField->setMaximumSize(QSize(300, 16777215));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, settingsnameField);

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

        settingsoldpwField = new QLineEdit(einstellungenTab);
        settingsoldpwField->setObjectName(QStringLiteral("settingsoldpwField"));
        settingsoldpwField->setMaximumSize(QSize(300, 16777215));
        settingsoldpwField->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, settingsoldpwField);

        settingsnewpwLabel = new QLabel(einstellungenTab);
        settingsnewpwLabel->setObjectName(QStringLiteral("settingsnewpwLabel"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, settingsnewpwLabel);

        settingsnewpwField = new QLineEdit(einstellungenTab);
        settingsnewpwField->setObjectName(QStringLiteral("settingsnewpwField"));
        settingsnewpwField->setMaximumSize(QSize(300, 16777215));
        settingsnewpwField->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(6, QFormLayout::FieldRole, settingsnewpwField);

        settingsnewpwwdhLabel = new QLabel(einstellungenTab);
        settingsnewpwwdhLabel->setObjectName(QStringLiteral("settingsnewpwwdhLabel"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, settingsnewpwwdhLabel);

        settingsnewpwwdhField = new QLineEdit(einstellungenTab);
        settingsnewpwwdhField->setObjectName(QStringLiteral("settingsnewpwwdhField"));
        settingsnewpwwdhField->setMaximumSize(QSize(300, 16777215));
        settingsnewpwwdhField->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(7, QFormLayout::FieldRole, settingsnewpwwdhField);

        label_12 = new QLabel(einstellungenTab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(16777215, 20));

        formLayout_2->setWidget(9, QFormLayout::FieldRole, label_12);

        settingsNewPasswordButton = new QPushButton(einstellungenTab);
        settingsNewPasswordButton->setObjectName(QStringLiteral("settingsNewPasswordButton"));
        settingsNewPasswordButton->setMaximumSize(QSize(100, 16777215));
        QIcon icon6;
        icon6.addFile(QStringLiteral("resources/check.png"), QSize(), QIcon::Normal, QIcon::Off);
        settingsNewPasswordButton->setIcon(icon6);

        formLayout_2->setWidget(10, QFormLayout::FieldRole, settingsNewPasswordButton);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_2->setItem(3, QFormLayout::FieldRole, verticalSpacer_3);

        settingsSaveButton = new QPushButton(einstellungenTab);
        settingsSaveButton->setObjectName(QStringLiteral("settingsSaveButton"));
        settingsSaveButton->setMaximumSize(QSize(100, 16777215));

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
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
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
        formLayout_4->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
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
        addUserButton->setMaximumSize(QSize(100, 16777215));
        addUserButton->setIcon(icon1);

        formLayout_4->setWidget(6, QFormLayout::FieldRole, addUserButton);

        resetPasswordButton = new QPushButton(userTab);
        resetPasswordButton->setObjectName(QStringLiteral("resetPasswordButton"));
        resetPasswordButton->setMaximumSize(QSize(120, 16777215));
        resetPasswordButton->setIcon(icon2);

        formLayout_4->setWidget(7, QFormLayout::FieldRole, resetPasswordButton);

        deleteUserButton = new QPushButton(userTab);
        deleteUserButton->setObjectName(QStringLiteral("deleteUserButton"));
        deleteUserButton->setMaximumSize(QSize(100, 16777215));
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
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        categorylistView = new QListView(categoryTab);
        categorylistView->setObjectName(QStringLiteral("categorylistView"));
        categorylistView->setMaximumSize(QSize(400, 16777215));
        categorylistView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        categorylistView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        gridLayout_5->addWidget(categorylistView, 0, 0, 1, 1);


        horizontalLayout_4->addLayout(gridLayout_5);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        delcategoryLabel = new QLabel(categoryTab);
        delcategoryLabel->setObjectName(QStringLiteral("delcategoryLabel"));
        delcategoryLabel->setMaximumSize(QSize(16777215, 200));
        delcategoryLabel->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(delcategoryLabel, 0, 0, 1, 1);

        addcategoryField = new QLineEdit(categoryTab);
        addcategoryField->setObjectName(QStringLiteral("addcategoryField"));
        addcategoryField->setMinimumSize(QSize(300, 0));
        addcategoryField->setMaximumSize(QSize(300, 16777215));
        addcategoryField->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(addcategoryField, 5, 0, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        delcategoryButton = new QPushButton(categoryTab);
        delcategoryButton->setObjectName(QStringLiteral("delcategoryButton"));
        delcategoryButton->setMinimumSize(QSize(100, 25));
        delcategoryButton->setMaximumSize(QSize(100, 25));

        gridLayout_4->addWidget(delcategoryButton, 1, 0, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_4->addItem(verticalSpacer_4, 2, 0, 1, 1);

        addcategoryLabel = new QLabel(categoryTab);
        addcategoryLabel->setObjectName(QStringLiteral("addcategoryLabel"));
        addcategoryLabel->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(addcategoryLabel, 4, 0, 1, 1);

        addcategoryButton = new QPushButton(categoryTab);
        addcategoryButton->setObjectName(QStringLiteral("addcategoryButton"));
        addcategoryButton->setMinimumSize(QSize(100, 25));
        addcategoryButton->setMaximumSize(QSize(100, 25));
        addcategoryButton->setLayoutDirection(Qt::LeftToRight);

        gridLayout_4->addWidget(addcategoryButton, 6, 0, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        line = new QFrame(categoryTab);
        line->setObjectName(QStringLiteral("line"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy);
        line->setMinimumSize(QSize(400, 0));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 3, 0, 1, 1);


        horizontalLayout_4->addLayout(gridLayout_4);


        verticalLayout_12->addLayout(horizontalLayout_4);


        verticalLayout_13->addLayout(verticalLayout_12);

        mainTabWidget->addTab(categoryTab, QString());
        standardPayMethodsTab = new QWidget();
        standardPayMethodsTab->setObjectName(QStringLiteral("standardPayMethodsTab"));
        standardPayMethodsTab->setEnabled(true);
        verticalLayout_11 = new QVBoxLayout(standardPayMethodsTab);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        stanpaylistView = new QListView(standardPayMethodsTab);
        stanpaylistView->setObjectName(QStringLiteral("stanpaylistView"));
        stanpaylistView->setMaximumSize(QSize(400, 16777215));
        stanpaylistView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        gridLayout_7->addWidget(stanpaylistView, 0, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));

        gridLayout_7->addLayout(gridLayout_8, 1, 0, 1, 1);


        horizontalLayout_5->addLayout(gridLayout_7);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        stanpayaddField = new QLineEdit(standardPayMethodsTab);
        stanpayaddField->setObjectName(QStringLiteral("stanpayaddField"));
        stanpayaddField->setMinimumSize(QSize(300, 0));
        stanpayaddField->setMaximumSize(QSize(300, 16777215));

        gridLayout_6->addWidget(stanpayaddField, 1, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        stanpayaddLabel = new QLabel(standardPayMethodsTab);
        stanpayaddLabel->setObjectName(QStringLiteral("stanpayaddLabel"));
        stanpayaddLabel->setMaximumSize(QSize(16777215, 200));
        stanpayaddLabel->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(stanpayaddLabel, 0, 0, 1, 1, Qt::AlignBottom);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        stanpayaddButton = new QPushButton(standardPayMethodsTab);
        stanpayaddButton->setObjectName(QStringLiteral("stanpayaddButton"));
        stanpayaddButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_7->addWidget(stanpayaddButton, 0, Qt::AlignTop);

        stanpaychangeButton = new QPushButton(standardPayMethodsTab);
        stanpaychangeButton->setObjectName(QStringLiteral("stanpaychangeButton"));
        stanpaychangeButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_7->addWidget(stanpaychangeButton, 0, Qt::AlignTop);

        stanpaydelButton = new QPushButton(standardPayMethodsTab);
        stanpaydelButton->setObjectName(QStringLiteral("stanpaydelButton"));
        stanpaydelButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_7->addWidget(stanpaydelButton, 0, Qt::AlignTop);


        gridLayout_6->addLayout(horizontalLayout_7, 2, 0, 1, 1);


        horizontalLayout_5->addLayout(gridLayout_6);


        verticalLayout_10->addLayout(horizontalLayout_5);


        verticalLayout_11->addLayout(verticalLayout_10);

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
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(logoutButton->sizePolicy().hasHeightForWidth());
        logoutButton->setSizePolicy(sizePolicy1);
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

        mainTabWidget->setCurrentIndex(3);


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
        delcategoryLabel->setText(QApplication::translate("UserWindow", "Bitte markieren sie links die Kategorieen die gel\303\266scht werden sollen", 0));
        delcategoryButton->setText(QApplication::translate("UserWindow", "l\303\266schen", 0));
        addcategoryLabel->setText(QApplication::translate("UserWindow", "Bitte geben sie hier neue Kategorien an", 0));
        addcategoryButton->setText(QApplication::translate("UserWindow", "hinzuf\303\274gen", 0));
        mainTabWidget->setTabText(mainTabWidget->indexOf(categoryTab), QApplication::translate("UserWindow", "Kategorien", 0));
        stanpayaddLabel->setText(QApplication::translate("UserWindow", "Bitte geben sie hier neue Standartzahlungsarten and die sie hinzuf\303\274gen m\303\266chsten", 0));
        stanpayaddButton->setText(QApplication::translate("UserWindow", "Hinzuf\303\274gen", 0));
        stanpaychangeButton->setText(QApplication::translate("UserWindow", "Bearbeiten", 0));
        stanpaydelButton->setText(QApplication::translate("UserWindow", "Entfernen", 0));
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
