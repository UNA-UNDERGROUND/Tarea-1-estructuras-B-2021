cmake_minimum_required(VERSION 3.0.0)
project(programa2 VERSION 0.1.0)


set(sources_include


)
set(sources_src
    ${sources_include}

)


add_executable(programa2 ${sources_src} src/source.cpp)
target_include_directories(programa2 PRIVATE include)

