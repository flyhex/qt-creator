# This file was generated by the Qt Quick Application wizard of Qt Creator.
# The code below adds the QmlApplicationViewer to the project and handles the
# activation of QML debugging.
# It is recommended not to modify this file, since newer versions of Qt Creator
# may offer an updated version of it.

equals(QT_MAJOR_VERSION, 5) {
    QT += quick1
} else {
    QT += declarative
}

SOURCES += $$PWD/qmlapplicationviewer.cpp
HEADERS += $$PWD/qmlapplicationviewer.h
INCLUDEPATH += $$PWD

# Include JS debugger library if QMLJSDEBUGGER_PATH is set
!isEmpty(QMLJSDEBUGGER_PATH) {
    include($$QMLJSDEBUGGER_PATH/qmljsdebugger-lib.pri)
} else {
    DEFINES -= QMLJSDEBUGGER
}

contains(CONFIG,qdeclarative-boostable):contains(MEEGO_EDITION,harmattan) {
    DEFINES += HARMATTAN_BOOSTER
}
