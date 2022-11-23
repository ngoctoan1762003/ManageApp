QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    SaveDay.cpp \
    addbanform.cpp \
    addform.cpp \
    ban.cpp \
    editbanform.cpp \
    editform.cpp \
    hoadonwindow.cpp \
    khachhang.cpp \
    loginform.cpp \
    main.cpp \
    mainwindow.cpp \
    manager.cpp \
    monhang.cpp \
    resetprop.cpp \
    review.cpp \
    save.cpp \
    taikhoan.cpp \
    tongket.cpp

HEADERS += \
    SaveDay.h \
    addbanform.h \
    addform.h \
    ban.h \
    editbanform.h \
    editform.h \
    hoadonwindow.h \
    khachhang.h \
    linkedlist.h \
    loginform.h \
    mainwindow.h \
    manager.h \
    monhang.h \
    node.h \
    resetprop.h \
    review.h \
    save.h \
    taikhoan.h \
    tongket.h

FORMS += \
    addbanform.ui \
    addform.ui \
    editbanform.ui \
    editform.ui \
    hoadonwindow.ui \
    loginform.ui \
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
