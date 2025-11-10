#include <QApplication>
#include <QWidget>   // 你的 QWidget 類別（例如由 Qt Designer 產生）

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget w1;
    QWidget w2;
    w1.setWindowTitle("左邊視窗");
    w2.setWindowTitle("右邊視窗");

    w1.show();

    int x = w1.x();
    int y = w1.y();
    int width = w1.width();

    w2.move(x + width + 20, y);
    w2.show();

    MidTermAI w3;
    w3.show();
    return a.exec();
}
