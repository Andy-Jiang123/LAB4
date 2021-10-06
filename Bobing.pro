#-------------------------------------------------
#
# Project created by QtCreator 2021-10-02T16:51:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Bobing
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        match.cpp \
        mode.cpp \
        one_player_mode.cpp \
        payment_mode.cpp \
        play_bobing.cpp \
        play_mode.cpp \
        prize.cpp \
        rules.cpp \
        wait.cpp \
        widget.cpp

HEADERS += \
        match.h \
        mode.h \
        one_player_mode.h \
        payment_mode.h \
        play_bobing.h \
        play_mode.h \
        prize.h \
        rules.h \
        wait.h \
        widget.h

FORMS += \
        match.ui \
        mode.ui \
        one_player_mode.ui \
        payment_mode.ui \
        play_bobing.ui \
        play_mode.ui \
        prize.ui \
        rules.ui \
        wait.ui \
        widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
