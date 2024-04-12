TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    main.cpp \
    yolov5.cpp
INCLUDEPATH += /usr/local/include \
               /usr/local/include/opencv4/opencv2 \
               /usr/local/include/opencv4 \

LIBS += /usr/local/lib/libopencv_*.so \
        -lhiredis -lcrypto

HEADERS += \
    Yolov5.h
