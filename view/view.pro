QT       += core gui opengl openglwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../controller/controller.cc \
    ../matrix_lib/S21_matrix_oop.cc \
    ../model/model.cc \
    ../model/parser/parser.cc \
    ../model/transform/transform.cc \
    main.cpp \
    view.cpp \
    widget.cpp

HEADERS += \
    ../controller/controller.h \
    ../matrix_lib/S21_matrix_oop.h \
    ../model/model.h \
    ../model/parser/parser.h \
    ../model/struct/struct.h \
    ../model/transform/transform.h \
    view.h \
    widget.h

FORMS += \
    view.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
