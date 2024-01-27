cmake_minimum_required(VERSION 3.25)
project(lab3)

set(CMAKE_CXX_STANDARD 23)

add_executable(lab3 main.cpp packages/package.cpp packages/package.h packages/emptyPackage.cpp packages/emptyPackage.h packages/supportPackage.cpp packages/supportPackage.h functions/functions.cpp functions/functions.h)
