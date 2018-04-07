cmake_minimum_required (VERSION 2.8.12)
project (Takbeer)

find_package (Qt5Widgets)

set (MyProjectLib_src ${PROJECT_SOURCE_DIR}/mainwindow.cpp)
set (MyProjectLib_hdr ${PROJECT_SOURCE_DIR}/mainwindow.h)
set (MyProjectLib_ui  ${PROJECT_SOURCE_DIR}/mainwindow.ui)
set (MyProjectBin_src ${PROJECT_SOURCE_DIR}/main.cpp)

qt5_wrap_cpp(MyProjectLib_hdr_moc ${MyProjectLib_hdr})
qt5_wrap_ui (MyProjectLib_ui_moc  ${MyProjectLib_ui})

include_directories (${PROJECT_SOURCE_DIR})
include_directories (${PROJECT_BINARY_DIR})

add_library (MyProjectLib SHARED 
    ${MyProjectLib_src}
    ${MyProjectLib_hdr_moc}
    ${MyProjectLib_ui_moc}
)
target_link_libraries (MyProjectLib Qt5::Widgets)

add_executable(MyProject ${MyProjectBin_src})
target_link_libraries (MyProject MyProjectLib)
