QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    character.cpp \
    gameInformation.cpp \
    inventory.cpp \
    item.cpp \
    main.cpp \
    mainwindow.cpp \
    mathpuzzle.cpp \
    object.cpp \
    pageswitchingexception.cpp \
    phone.cpp \
    player.cpp \
    puzzle.cpp \
    room.cpp \
    roomController.cpp

HEADERS += \
    character.h \
    gameInformation.h \
    inventory.h \
    item.h \
    mainwindow.h \
    mathpuzzle.h \
    object.h \
    pageswitchingexception.h \
    phone.h \
    player.h \
    puzzle.h \
    room.h \
    roomController.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    resource.qrc
