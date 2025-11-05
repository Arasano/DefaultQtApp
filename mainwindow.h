#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "itemservice.h"
#include "idgenerator.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void addItem();


private:
    Ui::MainWindow *ui;

    IdGenerator *generator;
    ItemService *service;
};
#endif // MAINWINDOW_H
