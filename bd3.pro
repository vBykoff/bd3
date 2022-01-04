QT       += core gui
QT += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    StudentDialog.cpp \
    TeacherDialog.cpp \
    connection.cpp \
    createcollectivedialog.cpp \
    editprofiledialog.cpp \
    entercollectivedialog.cpp \
    main.cpp \
    mainwindow.cpp \
    signin.cpp \
    teachersignin.cpp

HEADERS += \
    StudentDialog.h \
    TeacherDialog.h \
    connection.h \
    createcollectivedialog.h \
    editprofiledialog.h \
    entercollectivedialog.h \
    mainwindow.h \
    signin.h \
    teachersignin.h

FORMS += \
    StudentDialog.ui \
    TeacherDialog.ui \
    TeacherSignIn.ui \
    connection.ui \
    createcollectivedialog.ui \
    editprofiledialog.ui \
    entercollectivedialog.ui \
    mainwindow.ui \
    signin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
