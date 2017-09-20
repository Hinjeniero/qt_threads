cmake_minimum_required(VERSION 2.6)
project(ejemplo_thread_class)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(ejemplo_thread_class_SRCS ejemplo1.cpp main.cpp MyQTimer.cpp)

qt4_automoc(${ejemplo_thread_class_SRCS})
add_executable(ejemplo1 ${ejemplo_thread_class_SRCS})
target_link_libraries(ejemplo1 ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY})

install(TARGETS ejemplo1 RUNTIME DESTINATION bin)
