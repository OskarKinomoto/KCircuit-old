#-------------------------------------------------
#
# Project created by QtCreator 2015-01-21T18:04:02
#
#-------------------------------------------------

QT       += core gui

win{
QT += winextras
#icony
# http://doc.qt.io/qt-5/qtwin.html#details
# https://stackoverflow.com/questions/6523039/qt-application-and-window-icon-under-windows
}

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtCircuit
TEMPLATE = app


SOURCES += main.cpp\
	mainwindow.cpp \
    mainwidget.cpp \
    objectsettingswidget.cpp \
    aboutdialog.cpp \
    circuit.cpp \
    circuitscrollarea.cpp \
    circuitwidget.cpp \
    coordinate.cpp \
    abstractcircuitobject.cpp \
    circuitobject.cpp \
    circuitwire.cpp \
    circuitresistor.cpp \
    circuitcapacitor.cpp \
    circuitcoil.cpp \
    circuitvdc.cpp \
    circuitadc.cpp \
    circuitdiode.cpp \
    circuitgenerator.cpp \
    circuitopamp.cpp

HEADERS  += mainwindow.h \
    include.h \
    mainwidget.h \
    objectsettingswidget.h \
    aboutdialog.h \
    circuit.h \
    circuitscrollarea.h \
    circuitwidget.h \
    coordinate.h \
    abstractcircuitobject.h \
    circuitobject.h \
    circuitwire.h \
    circuitresistor.h \
    circuitcapacitor.h \
    circuitcoil.h \
    circuitvdc.h \
    circuitadc.h \
    circuitdiode.h \
    circuitgenerator.h \
    circuitopamp.h

QMAKE_CXXFLAGS += -std=c++11

RESOURCES += \
    resources.qrc

DISTFILES +=
