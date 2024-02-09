# modern-opengl-starter

This repo is a starter setup for modern OpenGL with GLFW, GLEW, and GLM built with [CMake](https://cmake.org/) and [Clang](https://clang.llvm.org/).

[GLFW](https://www.glfw.org/) is a free, Open Source, multi-platform library for OpenGL, OpenGL ES and Vulkan application development. It provides a simple, platform-independent API for creating windows, contexts and surfaces, reading input, handling events, etc.

[GLEW](https://glew.sourceforge.net/) (The OpenGL Extension Wrangler Library) is a cross-platform open-source C/C++ extension loading library. GLEW provides efficient run-time mechanisms for determining which OpenGL extensions are supported on the target platform.

[GLM](https://github.com/g-truc/glm) (OpenGL Mathematics) is a header only C++ mathematics library for graphics software based on the OpenGL Shading Language (GLSL) specifications.

## Prerequisites

- [https://cmake.org/](cmake), e.g. via Homebrew at https://formulae.brew.sh/formula/cmake
- clang, e.g. via `xcode-select --install` on macOS

## VS Code

Set up your IDE of choice, e.g. see the [VS Code](https://code.visualstudio.com/) guide for Clang on macOS: https://code.visualstudio.com/docs/cpp/config-clang-mac)

#### Recommended extensions

- ms-vscode.cpptools
- ms-vscode.cpptools-extension-pack
- ms-vscode.cpptools-themes
- ms-vscode.cmake-tools

## Install

Clone the repository and install the dependencies with cmake implicitly.

```
git clone git@github.com:sluger/modern-opengl-starter.git
cd modern-opengl-starter
mkdir build
cd build
cmake ..
make -j
```

## Run

```
cd build
./modern-opengl-starter
```
