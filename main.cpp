#include <QApplication>
#include <capt.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Capt c;

    QObject::connect(&c, SIGNAL(exitApp()), &a, SLOT(quit()));

    QString url = argv[1];
    url = url.split('=').at(1);
    QString out = argv[2];
    out = out.split('=').at(1);

    c.save(QUrl(url), out);

    return a.exec();
}
