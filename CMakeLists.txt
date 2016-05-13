cmake_minimum_required(VERSION 3.3)
project(gtkImpl)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#-----------------------------LIBS------------------------
#generated using pkg-config --cflags gtk+-3.0 gmodule-2.0 (NOTE: regenerate for different compilation platforms!)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -I/usr/include/gtk-3.0 -I/usr/include/at-spi2-atk/2.0 -I/usr/include/at-spi-2.0 -I/usr/include/dbus-1.0 -I/usr/lib/dbus-1.0/include -I/usr/include/gtk-3.0 -I/usr/include/gio-unix-2.0/ -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/harfbuzz -I/usr/include/freetype2 -I/usr/include/harfbuzz -I/usr/include/libdrm -I/usr/include/libpng16 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libpng16 -I/usr/include/glib-2.0 -I/usr/lib/glib-2.0/include")
#generated using pkg-config --libs gtk+-3.0 gmodule-2.0 (NOTE: regenerate for different compilation platforms!)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lgtk-3 -lgdk-3 -lpangocairo-1.0 -lpango-1.0 -latk-1.0 -lcairo-gobject -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lgobject-2.0 -Wl,--export-dynamic -lgmodule-2.0 -pthread -lglib-2.0")

set(SOURCE_FILES main.cpp demoCode.cpp GUI.ui)
add_executable(gtkImpl ${SOURCE_FILES})