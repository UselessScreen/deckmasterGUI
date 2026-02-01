#include "aspectratiowidget.h"

#include <QGridLayout>
#include <QResizeEvent>

AspectRatioWidget::AspectRatioWidget(QWidget *parent): QWidget(parent) {
    constexpr auto size_policy = QSizePolicy::Expanding;
    setSizePolicy(size_policy, size_policy);

    // make inner widget
    m_inner = new QWidget(this);
    // m_inner->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);

    // make grid layout
    m_gridLayout = new QGridLayout(m_inner);
    // m_gridLayout->setObjectName("btnGridLayout");
}

void AspectRatioWidget::resizeEvent(QResizeEvent *event) {
    const QSize s = event->size();

    const int w = s.width();
    const int h = s.height();

    int targetW = w;
    int targetH = static_cast<int>(w / m_aspectRatio);

    if (targetH > h) {
        targetH = h;
        targetW = static_cast<int>(h * m_aspectRatio);
    }

    const int x_pos = (w - targetW) / 2;
    const int y_pos = (h - targetH) / 2;

    m_inner->setGeometry(x_pos, y_pos, targetW, targetH);
}