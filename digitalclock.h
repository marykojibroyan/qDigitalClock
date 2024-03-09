// digitalclock.h
#ifndef DIGITALCLOCK_H
#define DIGITALCLOCK_H

#include <QWidget>

class QLCDNumber;
class QTimer;

class DigitalClock : public QWidget {
    Q_OBJECT

public:
    DigitalClock(QWidget *parent = nullptr);

private slots:
    void updateTime();

private:
    QLCDNumber *lcdNumber;
};

#endif // DIGITALCLOCK_H

