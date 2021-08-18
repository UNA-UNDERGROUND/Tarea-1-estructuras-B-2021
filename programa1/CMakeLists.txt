cmake_minimum_required(VERSION 3.0.0)
project(programa1 VERSION 0.1.0)


set(sources_include


)
set(sources_src
    ${sources_include}

)


add_executable(programa1 ${sources_src} src/source.cpp)
target_include_directories(programa1 PRIVATE include)

