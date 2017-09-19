project(ejemplo_thread_class)
cmake_minimum_required(VERSION 2.6)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

# Sources set
SET ( SOURCES
  ${SOURCES}
  ejemplo_thread_class.cpp
  main.cpp
 )

# Headers set
SET ( HEADERS
  ${HEADERS}
  ejemplo_thread_class.h
)

FIND_PACKAGE( Qt4 REQUIRED )
SET( QT_USE_QTGUI TRUE )
QT4_WRAP_CPP( MOC_SOURCES ${HEADERS} )
QT4_WRAP_UI( UI_HEADERS counterDlg.ui )

ADD_EXECUTABLE(ejemplo_thread_class ${SOURCES}  ${MOC_SOURCES} ${UI_HEADERS})
target_link_libraries(ejemplo_thread_class ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY})
install(TARGETS ejemplo_thread_class RUNTIME DESTINATION bin)
