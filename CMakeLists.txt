cmake_minimum_required(VERSION 3.28)
project(HehaWar LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Подключение и настройка SFML через FetchContent
include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.0
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

# Указание исходных файлов
add_executable(HehaWar 
    src/HehaWar.cpp
    src/engine/Mainloop.cpp
    src/engine/Event.cpp
    src/window/WindowEvent.cpp
    src/window/WindowManager.cpp
)


target_link_libraries(HehaWar PRIVATE SFML::Graphics)


target_include_directories(HehaWar PRIVATE 
    src/engine
    src/window
)