QT       += core gui opengl openglwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../QtGifImage-master/src/3rdParty/giflib/dgif_lib.c \
    ../QtGifImage-master/src/3rdParty/giflib/egif_lib.c \
    ../QtGifImage-master/src/3rdParty/giflib/gif_err.c \
    ../QtGifImage-master/src/3rdParty/giflib/gif_font.c \
    ../QtGifImage-master/src/3rdParty/giflib/gif_hash.c \
    ../QtGifImage-master/src/3rdParty/giflib/gifalloc.c \
    ../QtGifImage-master/src/3rdParty/giflib/quantize.c \
    ../QtGifImage-master/src/gifimage/qgifimage.cpp \
    ../controller/controller.cc \
    ../matrix_lib/S21_matrix_oop.cc \
    ../model/model.cc \
    ../model/parser/parser.cc \
    ../model/transform/transform.cc \
    main.cpp \
    view.cpp \
    widget.cpp

HEADERS += \
    ../QtGifImage-master/src/3rdParty/giflib/gif_hash.h \
    ../QtGifImage-master/src/3rdParty/giflib/gif_lib.h \
    ../QtGifImage-master/src/3rdParty/giflib/gif_lib_private.h \
    ../QtGifImage-master/src/gifimage/qgifglobal.h \
    ../QtGifImage-master/src/gifimage/qgifimage.h \
    ../QtGifImage-master/src/gifimage/qgifimage_p.h \
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

SUBDIRS += \
    ../QtGifImage-master/qtgifimage.pro \
    ../QtGifImage-master/qtgifimage.pro \
    ../QtGifImage-master/src/gifimage/gifimage.pro \
    ../QtGifImage-master/src/gifimage/gifimage.pro \
    ../QtGifImage-master/src/gifimage/gifimage.pro

DISTFILES += \
    ../QtGifImage-master/README.md \
    ../QtGifImage-master/index.qdoc \
    ../QtGifImage-master/qtgifimage.qdoc \
    ../QtGifImage-master/src/3rdParty/giflib/AUTHORS \
    ../QtGifImage-master/src/3rdParty/giflib/COPYING \
    ../QtGifImage-master/src/3rdParty/giflib/README \
    ../QtGifImage-master/src/gifimage/qtgifimage.pri \
    ../QtGifImage-master/sync.profile
