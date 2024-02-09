cmake_minimum_required (VERSION 3.11)

include(FetchContent)

FetchContent_Declare(
	glm
	GIT_REPOSITORY	https://github.com/g-truc/glm.git
	GIT_TAG 	1.0.0
  SOURCE_DIR     ${CMAKE_SOURCE_DIR}/external/glm
)
FetchContent_MakeAvailable(glm)

FetchContent_Declare(
	glfw
	GIT_REPOSITORY	https://github.com/glfw/glfw
	GIT_TAG 	3.3.9
  SOURCE_DIR     ${CMAKE_SOURCE_DIR}/external/glfw
)
FetchContent_MakeAvailable(glfw)

FetchContent_Declare(
  glew
  GIT_REPOSITORY https://github.com/Perlmint/glew-cmake.git
  GIT_TAG        glew-cmake-2.2.0
  SOURCE_DIR     ${CMAKE_SOURCE_DIR}/external/glew
)
FetchContent_GetProperties(glew)
if(NOT glew_POPULATED)
  FetchContent_Populate(glew)
  add_subdirectory(${glew_SOURCE_DIR} ${glew_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()

project (modern-opengl-starter)

add_executable(modern-opengl-starter
  src/main.cpp
)

add_definitions(-DGLEW_STATIC) # build GLEW statically with this compiler flag

target_link_libraries(modern-opengl-starter PRIVATE glfw libglew_static glm::glm)
