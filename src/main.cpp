#include <QApplication>
#include <QPushButton>
#include <QMainWindow>
#include <QVBoxLayout>
#include <QWidget>
#include <QDebug>


void add_grid(QWidget *centralWidget, QVBoxLayout *layout) {
    auto *button = new QPushButton("Click Me", centralWidget);

    QObject::connect(button, &QPushButton::clicked, [] {
        qDebug() << "Click Me";
    });

    layout->addWidget(button);
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QMainWindow w;
    auto *centralWidget = new QWidget(&w);
    auto *layout = new QVBoxLayout(centralWidget);

    add_grid(centralWidget, layout);

    centralWidget->setLayout(layout);
    w.setCentralWidget(centralWidget);
    w.show();
    return QApplication::exec();
}
