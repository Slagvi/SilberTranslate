/********************************************************************************
** Form generated from reading UI file 'SilberTranslate.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SILBERTRANSLATE_H
#define UI_SILBERTRANSLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SilberTranslateClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *optionCombo;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *translateEdit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *translatedLabel;
    QWidget *gliphsWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *gliffsLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *translateBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SilberTranslateClass)
    {
        if (SilberTranslateClass->objectName().isEmpty())
            SilberTranslateClass->setObjectName(QStringLiteral("SilberTranslateClass"));
        SilberTranslateClass->resize(873, 591);
        centralWidget = new QWidget(SilberTranslateClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        optionCombo = new QComboBox(centralWidget);
        optionCombo->addItem(QString());
        optionCombo->addItem(QString());
        optionCombo->setObjectName(QStringLiteral("optionCombo"));

        horizontalLayout_3->addWidget(optionCombo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        translateEdit = new QLineEdit(centralWidget);
        translateEdit->setObjectName(QStringLiteral("translateEdit"));

        horizontalLayout->addWidget(translateEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        translatedLabel = new QLabel(centralWidget);
        translatedLabel->setObjectName(QStringLiteral("translatedLabel"));

        horizontalLayout->addWidget(translatedLabel);


        verticalLayout->addLayout(horizontalLayout);

        gliphsWidget = new QWidget(centralWidget);
        gliphsWidget->setObjectName(QStringLiteral("gliphsWidget"));
        gliphsWidget->setMinimumSize(QSize(0, 30));
        verticalLayout_2 = new QVBoxLayout(gliphsWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gliffsLayout = new QHBoxLayout();
        gliffsLayout->setSpacing(6);
        gliffsLayout->setObjectName(QStringLiteral("gliffsLayout"));

        verticalLayout_2->addLayout(gliffsLayout);


        verticalLayout->addWidget(gliphsWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        translateBtn = new QPushButton(centralWidget);
        translateBtn->setObjectName(QStringLiteral("translateBtn"));

        horizontalLayout_2->addWidget(translateBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        closeBtn = new QPushButton(centralWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));

        horizontalLayout_2->addWidget(closeBtn);


        verticalLayout->addLayout(horizontalLayout_2);

        SilberTranslateClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SilberTranslateClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 873, 21));
        SilberTranslateClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SilberTranslateClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SilberTranslateClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SilberTranslateClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SilberTranslateClass->setStatusBar(statusBar);

        retranslateUi(SilberTranslateClass);

        QMetaObject::connectSlotsByName(SilberTranslateClass);
    } // setupUi

    void retranslateUi(QMainWindow *SilberTranslateClass)
    {
        SilberTranslateClass->setWindowTitle(QApplication::translate("SilberTranslateClass", "SilberTranslate", nullptr));
        label_2->setText(QApplication::translate("SilberTranslateClass", "Super fajny tekst t\305\202umacz\304\205cy do czego to jest", nullptr));
        optionCombo->setItemText(0, QApplication::translate("SilberTranslateClass", "Normalny na dziwny", nullptr));
        optionCombo->setItemText(1, QApplication::translate("SilberTranslateClass", "dziwny na normalny", nullptr));

        optionCombo->setCurrentText(QApplication::translate("SilberTranslateClass", "Normalny na dziwny", nullptr));
        translatedLabel->setText(QApplication::translate("SilberTranslateClass", "\305\202\303\263\304\207\305\274\305\233", nullptr));
        translateBtn->setText(QApplication::translate("SilberTranslateClass", "T\305\202umacz", nullptr));
        closeBtn->setText(QApplication::translate("SilberTranslateClass", "Zamknij", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SilberTranslateClass: public Ui_SilberTranslateClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SILBERTRANSLATE_H
