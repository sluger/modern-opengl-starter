# modern-opengl-starter

This repo is a starter setup for modern OpenGL with GLFW, GLEW, and GLM built with cmake and clang on macOS.

## Prerequisites

- [https://cmake.org/](cmake), e.g. via Homebrew at https://formulae.brew.sh/formula/cmake
- clang, e.g. via `xcode-select --install` on macOS
- Set up IDE of choice, e.g. see the VS Code guide: https://code.visualstudio.com/docs/cpp/config-clang-mac)

Also recommending the cpp and cmake VS Code extensions.

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
