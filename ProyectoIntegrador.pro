QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ayuda.cpp \
    candidatos.cpp \
    certidicado.cpp \
    main.cpp \
    principal.cpp

HEADERS += \
    ayuda.h \
    candidatos.h \
    certidicado.h \
    principal.h

FORMS += \
    ayuda.ui \
    candidatos.ui \
    certidicado.ui \
    principal.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    Imagenes.qrc \
    Imagenes.qrc \
    imagens.qrc
