#include <QApplication>
#include "midtermai.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MidTermAI w;
    w.show();
    return a.exec();
}
