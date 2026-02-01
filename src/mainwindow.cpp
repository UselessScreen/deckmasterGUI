#include "mainwindow.h"

#include "squarebutton.h"
#include "aspectratiowidget.h"

namespace {
    void setupButtons(const Ui::MainWindow *ui) {
        // ReSharper disable once CppTooWideScope
        constexpr int grid_width = 5;
        constexpr int grid_height = 3;
        for (int i = 0; i < grid_height; ++i) {
            for (int j = 0; j < grid_width; ++j) {
                QWidget *parent = ui->centralwidget;
                auto *button =  new SquareButton(parent);
                ui->aspectRatioWidget->grid()->addWidget(button,i,j);
            }
        }
    }
}


MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    setupButtons(ui);
}

MainWindow::~MainWindow() {delete ui;}

