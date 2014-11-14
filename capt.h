#ifndef CAPT_H
#define CAPT_H

#include <QWebView>
#include <QWebFrame>
#include <QPixmap>

class Capt:public QObject
{
    Q_OBJECT

public:
    Capt();
    void save(QUrl, QString);

public slots:
    void loaded(bool);

signals:
    void exitApp();

private:
    QString path;
    QWebView *webView;
};

#endif // CAPT_H
