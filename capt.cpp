#include "capt.h"

Capt::Capt()
{
    this->webView = new QWebView(0);
    QObject::connect(this->webView, SIGNAL(loadFinished(bool)), this, SLOT(loaded(bool)));
}

void Capt::save(QUrl url, QString path){
    this->path = path;
    this->webView->load(url);
}

void Capt::loaded(bool ok){
    if(!ok){
        return;
    }

    QWebPage *page = this->webView->page();
    page->setViewportSize(QSize(1366, 768));
    QWebFrame*frame = page->currentFrame();
    page->setViewportSize(frame->contentsSize());

    QPainter painter;
    QPixmap pixmap(frame->contentsSize());
    painter.begin(&pixmap);
    frame->render(&painter);
    painter.end();
    pixmap.save(this->path);

    emit exitApp();
}
