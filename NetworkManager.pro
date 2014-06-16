#-------------------------------------------------
#
# Mu Online Second Life
# http://github.com/MuOnlineSecondLife
#
#-------------------------------------------------

QT                  += core
QT                  -= gui

#-------------------------------------------------

TARGET              = NetworkManager

#-------------------------------------------------

CONFIG              += console
CONFIG              -= app_bundle

#-------------------------------------------------

TEMPLATE            = app

#-------------------------------------------------

SOURCES += main.cpp

HEADERS += \
    main.h
