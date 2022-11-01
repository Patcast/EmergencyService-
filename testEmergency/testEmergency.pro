TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG += qt

SOURCES += \
        TestMonitoredSpace.cpp \
        main.cpp \



unix:!macx: LIBS += -L$$PWD/../libEmergency/ -lemergency

INCLUDEPATH += $$PWD/../libEmergency
DEPENDPATH += $$PWD/../libEmergency
