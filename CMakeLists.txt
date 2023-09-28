cmake_minimum_required(VERSION 3.10)
project(ecs_rl)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Automatically gather all the .cpp files from your project
file(GLOB_RECURSE SOURCE_FILES ${CMAKE_SOURCE_DIR}/*.cpp)

# Add the executable using the gathered source files
add_executable(YourProjectName ${SOURCE_FILES})

if(WIN32)
    # Assuming you've placed the pdcurses headers and libs in a 'pdcurses/' directory in your project.
    include_directories(${CMAKE_SOURCE_DIR}/pdcurses/include)
    link_directories(${CMAKE_SOURCE_DIR}/pdcurses/lib)

    target_link_libraries(YourProjectName PRIVATE pdcurses)
else()
    find_package(Curses REQUIRED)  # This should find ncurses on most Linux systems.
    include_directories(${CURSES_INCLUDE_DIR})
    
    target_link_libraries(YourProjectName PRIVATE ${CURSES_LIBRARIES})
endif()

