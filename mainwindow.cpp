#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "itemservice.h"
#include "idgenerator.h"

#include <QTabWidget>
#include <QVBoxLayout>
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent) , ui(new Ui::MainWindow), generator(new IdGenerator()), service(new ItemService(generator))
{
    ui->setupUi(this);

    connect(ui->addItemButton,
            &QPushButton::clicked,
            this,
            &MainWindow::addItem);
}


MainWindow::~MainWindow()
{
    delete this->service;
    delete this->generator;
    delete ui;
}

void MainWindow::addItem() {
    QString name = ui->nameTextEdit->toPlainText();
    QString description =ui->descriptionTextEdit->toPlainText();

    this->service->addItem(name,description);

}

