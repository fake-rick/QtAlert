#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    // 适配高分屏
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QCoreApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
    QGuiApplication::setHighDpiScaleFactorRoundingPolicy(Qt::HighDpiScaleFactorRoundingPolicy::PassThrough);

    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
