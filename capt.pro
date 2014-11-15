#-------------------------------------------------
#
# Project created by QtCreator 2014-11-14T19:51:48
#
#-------------------------------------------------

QT       += core gui webkit

greaterThan(QT_MAJOR_VERSION, 4): {
  QT       +=  webkitwidgets
}

TARGET = capt
CONFIG   += qt console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    capt.cpp

HEADERS += \
    capt.h

OTHER_FILES += \
    .gitignore \
    README.md
