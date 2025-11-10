#ifndef MIDTERMAI_H
#define MIDTERMAI_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MidTermAI;
}
QT_END_NAMESPACE

class MidTermAI : public QWidget
{
    Q_OBJECT

public:
    MidTermAI(QWidget *parent = nullptr);
    ~MidTermAI();

private:
    Ui::MidTermAI *ui;
};
#endif // MIDTERMAI_H
