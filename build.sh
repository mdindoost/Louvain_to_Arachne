#!/bin/bash

# Load the CMake module (adjust the version number if necessary)
module load cmake/3.18.2

# Create the build directory if it doesn't exist
mkdir -p build

# Navigate to the build directory
cd build

# Run cmake to configure the project
cmake ..

# Compile the project
make

