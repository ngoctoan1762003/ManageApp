QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    SaveDay.cpp \
    addform.cpp \
    editform.cpp \
    hoadonwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    manager.cpp \
    monhang.cpp \
    resetprop.cpp \
    review.cpp \
    save.cpp \
    tongket.cpp

HEADERS += \
    SaveDay.h \
    addform.h \
    editform.h \
    hoadonwindow.h \
    linkedlist.h \
    mainwindow.h \
    manager.h \
    monhang.h \
    node.h \
    resetprop.h \
    review.h \
    save.h \
    tongket.h

FORMS += \
    addform.ui \
    editform.ui \
    hoadonwindow.ui \
    mainwindow.ui \
    resetprop.ui \
    review.ui \
    tongket.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource.qrc
