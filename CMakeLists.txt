cmake_minimum_required(VERSION 4.1)
project(deckmasterGUI)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOUIC_SEARCH_PATHS ${CMAKE_CURRENT_SOURCE_DIR}/ui)

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(deckmasterGUI
        src/main.cpp
        src/mainwindow.cpp
        src/mainwindow.h
        src/ui/squarebutton.h
        src/ui/squarebutton.cpp
        ui/mainwindow.ui
)

target_include_directories(deckmasterGUI PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/ui)

target_link_libraries(deckmasterGUI
        Qt::Core
        Qt::Gui
        Qt::Widgets
)

