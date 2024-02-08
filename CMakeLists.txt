cmake_minimum_required (VERSION 3.5)
project (modern-opengl)

add_executable(modern-opengl
  src/main.cpp
)

set_property(TARGET modern-opengl PROPERTY CXX_STANDARD 11)
target_compile_options(modern-opengl PRIVATE -Wall)

add_definitions(-DGLEW_STATIC)
add_subdirectory(lib/glfw EXCLUDE_FROM_ALL)
add_subdirectory(lib/glew EXCLUDE_FROM_ALL)

target_link_libraries(modern-opengl
  PRIVATE glfw
  PRIVATE libglew_static
)

target_include_directories(modern-opengl
  PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src
  PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/src
)
