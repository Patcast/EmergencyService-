QT -= gui

TEMPLATE = lib
DEFINES += EMERGENCY_LIBRARY

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    actuator.cpp \
    alarm.cpp \
    callauthority.cpp \
    component.cpp \
    controlcenter.cpp \
    emergencycenter.cpp \
    emergencyservice.cpp \
    gas.cpp \
    monitoredspace.cpp \
    motion.cpp \
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
    gas.h \
    monitoredspace.h \
    motion.h \
    sensor.h

# Default rules for deployment.
unix {
    target.path =$PWD/../lib
}
!isEmpty(target.path): INSTALLS += target
