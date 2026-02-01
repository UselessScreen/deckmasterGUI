#pragma once

#include <QGridLayout>
#include <QWidget>

class AspectRatioWidget : public QWidget {
    Q_OBJECT
public:
    explicit AspectRatioWidget(QWidget *parent = nullptr);
    [[nodiscard]] QGridLayout *grid() const { return m_gridLayout; }

protected:
    void resizeEvent(QResizeEvent *event) override;

private:
    double m_aspectRatio = 5.0/3.0;
    QWidget *m_inner = nullptr;
    QGridLayout *m_gridLayout = nullptr;
};