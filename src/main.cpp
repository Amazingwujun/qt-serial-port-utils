#include <QApplication>
#include "headers/mainwindows.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindows mainWindows;
    mainWindows.show();
    return QApplication::exec();
}
