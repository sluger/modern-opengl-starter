cmake_minimum_required (VERSION 3.1)

project (modern-opengl)

add_executable(modern-opengl
  src/main.cpp
)

add_definitions(-DGLEW_STATIC) # build GLEW statically with this compiler flag
add_subdirectory(lib/glfw)
add_subdirectory(lib/glew)

target_link_libraries(modern-opengl glfw libglew_static)
