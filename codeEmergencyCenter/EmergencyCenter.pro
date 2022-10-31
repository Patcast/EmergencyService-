QT -= gui

TEMPLATE = lib
DEFINES += EMERGENCYCENTER_LIBRARY

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    TestMonitoredSpace.cpp \
    actuator.cpp \
    alarm.cpp \
    callauthority.cpp \
    component.cpp \
    controlcenter.cpp \
    emergencycenter.cpp \
    emergencyservice.cpp \
    main.cpp \
    monitoredspace.cpp \
    observer.cpp \
    sensor.cpp

HEADERS += \
    actuator.h \
    alarm.h \
    callauthority.h \
    component.h \
    controlcenter.h \
    emergencycenter.h \
    EmergencyCenter_global.h \
    emergencyservice.h \
    monitoredspace.h \
    observer.h \
    sensor.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
