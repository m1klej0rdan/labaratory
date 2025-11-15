
cmake_minimum_required(VERSION 3.10)
project(StringProcessor)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(SOURCES
    main.cpp
    string-utils.cpp
)
set(HEADERS
    string-utils.h
)
add_executable(string_processor ${SOURCES} ${HEADERS})
target_include_directories(string_processor PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
add_custom_command(TARGET string_processor POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy
    ${CMAKE_SOURCE_DIR}/input.txt
    $<TARGET_FILE_DIR:string_processor>/input.txt
    COMMENT "Копирование input.txt в папку build..."
)
