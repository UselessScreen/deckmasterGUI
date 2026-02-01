#include "squarebutton.h"
#include <QResizeEvent>

SquareButton::SquareButton(QWidget *parent): QPushButton(parent) {
    constexpr auto size_policy = QSizePolicy::Expanding;
    setSizePolicy(size_policy, size_policy);
}

void SquareButton::resizeEvent(QResizeEvent *event) {
    const int size = qMin(event->size().width(), event->size().height());
    QPushButton::resizeEvent(event);
    resize(size, size);
}