project(task_2segments_cmake)

# Создание исполняемого файла
add_executable (task_2segments_cmake   "Class_2.cpp" "Class_3.cpp"  "func.cpp" "task_2segments_cmake.cpp")

# Установка стандарта C++
set_property(TARGET task_2segments_cmake PROPERTY CXX_STANDARD 20)
