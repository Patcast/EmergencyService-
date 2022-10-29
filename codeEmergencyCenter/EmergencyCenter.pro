QT -= gui

TEMPLATE = lib
DEFINES += EMERGENCYCENTER_LIBRARY

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    actuator.cpp \
    alarm.cpp \
    callauthority.cpp \
    component.cpp \
    emergencycenter.cpp \
    emergencyservices.cpp \
    main.cpp \
    monitoredspace.cpp

HEADERS += \
    EmergencyCenter_global.h \
    actuator.h \
    alarm.h \
    callauthority.h \
    component.h \
    emergencycenter.h \
    emergencyservices.h \
    monitoredspace.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
