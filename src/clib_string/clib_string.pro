TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    clib_string_test.c \
    clib_string.c \

HEADERS += \
    clib_string.h \

DISTFILES += \
    readme.md