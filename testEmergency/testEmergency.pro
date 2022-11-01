TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG += qt

SOURCES += \
        main.cpp \



unix:!macx: LIBS += -L$$PWD/../libEmergency/lib/ -lEmergencyCenter

INCLUDEPATH += $$PWD/../libEmergency
DEPENDPATH += $$PWD/../libEmergency

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-EmergencyCenter-Desktop_Qt_6_4_0_MinGW_64_bit-Debug/release/ -lEmergencyCenter
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-EmergencyCenter-Desktop_Qt_6_4_0_MinGW_64_bit-Debug/debug/ -lEmergencyCenter
else:unix: LIBS += -L$$PWD/../build-EmergencyCenter-Desktop_Qt_6_4_0_MinGW_64_bit-Debug/ -lEmergencyCenter

INCLUDEPATH += $$PWD/../build-EmergencyCenter-Desktop_Qt_6_4_0_MinGW_64_bit-Debug/debug
DEPENDPATH += $$PWD/../build-EmergencyCenter-Desktop_Qt_6_4_0_MinGW_64_bit-Debug/debug
