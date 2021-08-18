cmake_minimum_required(VERSION 3.0.0)
project(tarea-1 VERSION 0.1.0)

add_subdirectory(programa1)
add_subdirectory(programa2)
add_subdirectory(programa3)
add_subdirectory(programa5)


file(COPY assets/programa5/ DESTINATION ${programa5_BINARY_DIR})
