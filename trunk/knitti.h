#ifndef KNITTI_H
#define KNITTI_H

#include <QMainWindow>

namespace Ui {
    class knitti;
}

class knitti : public QMainWindow
{
    Q_OBJECT

public:
    explicit knitti(QWidget *parent = 0);
    ~knitti();

private:
    Ui::knitti *ui;
};

#endif // KNITTI_H
