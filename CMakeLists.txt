cmake_minimum_required(VERSION 3.25.1)
project(Shambles VERSION 0.0.1)

# externals do not get the compile options, the hope 
# being that they are reasonable. I'm not going to silence
# warnings for me based on them
add_subdirectory(External/Balagan)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_COMPILE_WARNING_AS_ERROR ON)
set(CMAKE_DEBUG_POSTFIX d)

if (MSVC)
    add_compile_options(/W4 /WX /Wall)
else()
    add_compile_options(-Wall -Wextra -pedantic -Werror -Wconversion)
endif()


set(SHAMBLES_INCLUDES Src/Game)

add_subdirectory(Src/Game)

add_library(Shambles Src/main.cpp)
target_link_libraries(Shambles Balagan Game)
target_include_directories(Shambles PUBLIC ${SHAMBLES_INCLUDES} ${BALAGAN_INCLUDES})
