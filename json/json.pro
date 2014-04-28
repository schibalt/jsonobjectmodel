TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    jsonvalue.cpp \
    jsonobject.cpp \
    jsonarray.cpp \
    jsonnumber.cpp \
    jsonstring.cpp

HEADERS += \
    jsonvalue.hpp \
    jsonobject.hpp \
    jsonarray.hpp \
    jsonnumber.hpp \
    jsonstring.hpp

QMAKE_CXXFLAGS += -std=c++11
