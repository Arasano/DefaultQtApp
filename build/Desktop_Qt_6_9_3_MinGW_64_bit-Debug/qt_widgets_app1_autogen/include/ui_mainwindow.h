/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *buttonLayout;
    QHBoxLayout *addItemContainer;
    QPushButton *addItemButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *NameContainer;
    QLabel *NameLabel;
    QPlainTextEdit *nameTextEdit;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *descriptionContainer;
    QLabel *descriptionLabel;
    QPlainTextEdit *descriptionTextEdit;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *listContainer;
    QLabel *listLabel;
    QListView *listItemView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(793, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 171, 654));
        buttonLayout = new QVBoxLayout(verticalLayoutWidget);
        buttonLayout->setObjectName("buttonLayout");
        buttonLayout->setContentsMargins(10, 10, 10, 600);
        addItemContainer = new QHBoxLayout();
        addItemContainer->setObjectName("addItemContainer");
        addItemContainer->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        addItemContainer->setContentsMargins(0, -1, 0, -1);
        addItemButton = new QPushButton(verticalLayoutWidget);
        addItemButton->setObjectName("addItemButton");

        addItemContainer->addWidget(addItemButton);


        buttonLayout->addLayout(addItemContainer);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(190, 30, 491, 90));
        NameContainer = new QHBoxLayout(horizontalLayoutWidget_2);
        NameContainer->setObjectName("NameContainer");
        NameContainer->setContentsMargins(10, 10, 10, 10);
        NameLabel = new QLabel(horizontalLayoutWidget_2);
        NameLabel->setObjectName("NameLabel");
        NameLabel->setMinimumSize(QSize(0, 0));
        NameLabel->setMaximumSize(QSize(200, 30));

        NameContainer->addWidget(NameLabel);

        nameTextEdit = new QPlainTextEdit(horizontalLayoutWidget_2);
        nameTextEdit->setObjectName("nameTextEdit");
        nameTextEdit->setMaximumSize(QSize(16777215, 16777215));

        NameContainer->addWidget(nameTextEdit);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(190, 130, 491, 90));
        descriptionContainer = new QHBoxLayout(horizontalLayoutWidget_3);
        descriptionContainer->setObjectName("descriptionContainer");
        descriptionContainer->setContentsMargins(10, 10, 10, 10);
        descriptionLabel = new QLabel(horizontalLayoutWidget_3);
        descriptionLabel->setObjectName("descriptionLabel");
        descriptionLabel->setMinimumSize(QSize(0, 0));
        descriptionLabel->setMaximumSize(QSize(200, 30));

        descriptionContainer->addWidget(descriptionLabel);

        descriptionTextEdit = new QPlainTextEdit(horizontalLayoutWidget_3);
        descriptionTextEdit->setObjectName("descriptionTextEdit");
        descriptionTextEdit->setMaximumSize(QSize(16777215, 16777215));

        descriptionContainer->addWidget(descriptionTextEdit);

        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(200, 330, 541, 161));
        listContainer = new QHBoxLayout(horizontalLayoutWidget_4);
        listContainer->setObjectName("listContainer");
        listContainer->setContentsMargins(10, 10, 10, 10);
        listLabel = new QLabel(horizontalLayoutWidget_4);
        listLabel->setObjectName("listLabel");
        listLabel->setMinimumSize(QSize(0, 0));
        listLabel->setMaximumSize(QSize(200, 30));

        listContainer->addWidget(listLabel);

        listItemView = new QListView(horizontalLayoutWidget_4);
        listItemView->setObjectName("listItemView");

        listContainer->addWidget(listItemView);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        addItemButton->setText(QCoreApplication::translate("MainWindow", "add item", nullptr));
        NameLabel->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("MainWindow", "Description", nullptr));
        listLabel->setText(QCoreApplication::translate("MainWindow", "List items", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
