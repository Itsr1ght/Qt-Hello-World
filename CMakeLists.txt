cmake_minimum_required(VERSION 3.31)

project(hello_world)

find_package(Qt6 REQUIRED COMPONENTS Qml Quick Widgets)

set(applicationitemapp_SRCS
   source/main.cpp
)

qt_add_resources(RESOURCES res/resources.qrc)

add_executable(hello_world ${applicationitemapp_SRCS} ${RESOURCES})
target_link_libraries(hello_world
    Qt6::Qml
    Qt6::Core
    Qt6::Quick
    Qt6::Widgets
)

install(TARGETS hello_world ${KDE_INSTALL_TARGETS_DEFAULT_ARGS})
