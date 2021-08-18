cmake_minimum_required(VERSION 3.0.0)
project(tarea-1 VERSION 0.1.0)


set(sources_include


)
set(sources_src
    ${sources_include}

)


add_executable(tarea-1 ${sources_src} src/source.cpp)
target_include_directories(tarea-1 PRIVATE include)

