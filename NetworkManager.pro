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

SOURCES += main.cpp \
    muosl/NetworkManager.cpp \
    muosl/Logger.cpp

HEADERS += main.h \
    headers.h \
    muosl/NetworkManager.h \
    muosl/Logger.h
