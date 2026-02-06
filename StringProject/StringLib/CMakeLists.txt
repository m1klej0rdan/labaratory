# Создаем статическую библиотеку
add_library(StringLib STATIC src/StringLib.cpp include/StringLib.h)

# Указываем путь к заголовочным файлам
target_include_directories(StringLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)