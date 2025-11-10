#include "midtermai.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MidTermAI w;
    w.show();
    return a.exec();
}
