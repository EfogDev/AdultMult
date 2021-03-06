#-------------------------------------------------
#
# Project created by QtCreator 2015-01-01T21:13:23
#
#-------------------------------------------------

QT       += core gui widgets network webkit webkitwidgets

TARGET = WatchIt
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    serial.cpp \
    helpwindow.cpp \
    prefswindow.cpp

HEADERS  += mainwindow.h \
    const.h \
    serial.h \
    helpwindow.h \
    prefswindow.h \
    ui_prefswindow.h \
    ui_helpwindow.h \
    ../build-WatchIt-Desktop-Debug/ui_prefswindow.h

DISTFILES += \
    ListWidget.css \
    browser.html

RESOURCES += \
    styles.qrc \
    web.qrc

CONFIG += C++11

FORMS += \
    helpwindow.ui \
    prefswindow.ui

RC_FILE = icon.rc
