#ifndef GLOBAL_VALUE_H
#define GLOBAL_VALUE_H

#include "main/mainwindow.h"

class MainWindow;

extern MainWindow *mainWindow;

#ifdef DEVICE_EVB
const int font_size = 40;
const int font_size_big = 50;

const QString return_resource_str = ":/image/setting/return_big.png";
const int return_icon_width = 212;
const int return_icon_height = 70;
const int top_icon_size = 60;
#else
const int font_size = 18;
const int font_size_big = 23;

const QString return_resource_str = ":/image/setting/return.png";
const int return_icon_width = 115;
const int return_icon_height = 40;
const int top_icon_size = 40;
#endif

#endif // GLOBAL_VALUE_H
