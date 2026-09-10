cmake_minimum_required(VERSION 3.22)

project(TULForMySound VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#Adegramos Carpetas de modulos y plugins
add_subdirectory(Modules)
add_subdirectory(Plugins)

# Agregamos JUCE
add_subdirectory(JUCE)

# Plugins
# add_subdirectory(Plugins/Gain)