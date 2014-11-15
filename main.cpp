#include <QApplication>
#include <capt.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Capt c;

    QObject::connect(&c, SIGNAL(exitApp()), &a, SLOT(quit()));

    QString url;
    QString out;

    for(int i = 0; i < argc; i++){
        QStringList param = QString(argv[i]).split('=');
        if(param.length() == 1){
            continue;
        }

        if(param.at(0) == "--url"){
            url = param.at(1);
        } else if(param.at(0) == "--out"){
            out = param.at(1);
        }
    }

    if(!url.length() or !out.length()){
        qDebug("missed --out or --url params");
        return 0;
    }else{
        c.save(QUrl(url), out);
    }

    return a.exec();
}
