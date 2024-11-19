#include <QQuickView>
#include <QUrl>
#include <QString>
#ifdef Q_OS_ANDROID
#include <QGuiApplication>
#else
#include <QApplication>
#endif

Q_DECL_EXPORT int main(int argc, char *argv[])
{
#ifdef Q_OS_ANDROID
    QGuiApplication app(argc, argv);
#else
    QApplication app(argc, argv);
#endif

    QQuickView view;
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    view.setSource(QUrl(QStringLiteral("qrc:///main.qml")));
    view.show();

    return app.exec();
}
