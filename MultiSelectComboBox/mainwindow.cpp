#include "mainwindow.h"
#include "multiselectcombobox.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    MultiSelectComboBox *m = new MultiSelectComboBox(this);
    QStringList texts;
    texts<<QString("C++")<<QString("Python")<<QString("C语言")<<QString("Go语言")<<QString("Java")<<QString("PHP");
    m->addItems(texts);
    m->resize(300,30);
    m->move(200,200);
}

MainWindow::~MainWindow()
{
    delete ui;
}
