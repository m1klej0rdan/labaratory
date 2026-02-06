# Создаем исполняемый файл
add_executable(StringApp main.cpp)

# Связываем с библиотекой StringLib
target_link_libraries(StringApp StringLib)