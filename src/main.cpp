/**
 * Adapted from the udemy course on Computer Graphics with Modern OpenGL and C++ by Ben Cook
 */

#include <stdio.h>
#include <iostream>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtx/string_cast.hpp>

// window dimensions
const GLint WIDTH = 800, HEIGHT = 600;

int main(int argc, const char *argv[])
{
  // create a vector with glm and print it to the console
  glm::vec3 v = glm::vec3(-1.0f, 0.0f, 0.0f);
  std::cout << glm::to_string(v) << std::endl;

  //  init GLFW
  if (!glfwInit())
  {
    printf("GLFW init failed!");
    glfwTerminate();
    return 1;
  }

  // setup GLFW window properties
  // openGL version
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  // core profile = no backwards compatibility
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
  // allow forward compatibility
  glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

  GLFWwindow *mainWindow = glfwCreateWindow(WIDTH, HEIGHT, "Test Window", NULL, NULL);

  if (!mainWindow)
  {
    printf("GLFW window creation failed!");
    glfwTerminate();
    return 1;
  }

  // get buffer size information
  int bufferWidth, bufferHeight;
  glfwGetFramebufferSize(mainWindow, &bufferWidth, &bufferHeight);

  // set context for GLEW to use
  glfwMakeContextCurrent(mainWindow);

  // allow modern extension features
  glewExperimental = GL_TRUE;

  if (glewInit() != GLEW_OK)
  {
    printf("GLEW init failed!");
    glfwDestroyWindow(mainWindow);
    glfwTerminate();
    return 1;
  }

  // setup viewport size
  glViewport(0, 0, bufferWidth, bufferHeight);

  // loop until window closed
  while (!glfwWindowShouldClose(mainWindow))
  {
    // get and handle user input events
    glfwPollEvents();

    // clear window
    glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glfwSwapBuffers(mainWindow);
  }

  return 0;
}
