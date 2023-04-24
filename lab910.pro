QT += core
QT -= gui

CONFIG += c++11

TARGET = lab910
CONFIG += console
CONFIG += qtestlib
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    polynomial.cpp \
    test_polynomial.cpp

HEADERS += \
    polynomial.h \
    test_polynomial.h

win32:TARGET = ../TestLib
