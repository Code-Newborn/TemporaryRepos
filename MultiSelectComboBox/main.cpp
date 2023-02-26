#include "multiselectcombobox.h"
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
      MainWindow w;

    w.setWindowTitle(QString("多选下拉框"));
    w.show();

    return a.exec();
}
