#pragma once

#include <QPushButton>

class SquareButton : public QPushButton {
    Q_OBJECT
public:
    explicit SquareButton(QWidget *parent = nullptr);

protected:
    void resizeEvent(QResizeEvent *event) override;
};
