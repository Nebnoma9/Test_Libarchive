TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
DEFINES = _SSIZE_T_
INCLUDEPATH += "C:\Users\ASUS\OneDrive\Documents\code C\libarchive-v3.5.2-win64\libarchive\include"

LIBS += "C:\Users\ASUS\OneDrive\Documents\code C\libarchive-v3.5.2-win64\libarchive\lib\archive.lib"
LIBS += "C:\Users\ASUS\OneDrive\Documents\code C\libarchive-v3.5.2-win64\libarchive\lib\archive_static.lib"

SOURCES += \
        main.cpp
