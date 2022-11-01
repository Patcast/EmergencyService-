TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG += qt

SOURCES += \
        main.cpp \



unix:!macx: LIBS += -L$$PWD/../libEmergency/lib/ -lEmergencyCenter

INCLUDEPATH += $$PWD/../libEmergency
DEPENDPATH += $$PWD/../libEmergency
