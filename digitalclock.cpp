// digitalclock.cpp
#include "digitalclock.h"
#include <QLCDNumber>
#include <QTimer>
#include <QTime>
#include <QVBoxLayout>

DigitalClock::DigitalClock(QWidget *parent) : QWidget(parent) {
    QVBoxLayout *layout = new QVBoxLayout(this);
    lcdNumber = new QLCDNumber(this);
    lcdNumber->setDigitCount(8);
    layout->addWidget(lcdNumber);

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &DigitalClock::updateTime);
    timer->start(1000);

    updateTime();
}

void DigitalClock::updateTime() {
    QTime currentTime = QTime::currentTime();
    QString timeString = currentTime.toString("hh:mm:ss");
    lcdNumber->display(timeString);
}
