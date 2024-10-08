cmake_minimum_required(VERSION 3.10)
project(igraph_project)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# External igraph source directory
set(IGRAPH_DIR "${CMAKE_SOURCE_DIR}/external_libs/igraph")

# Add igraph library to the project (build it)
add_subdirectory(${IGRAPH_DIR} ${CMAKE_BINARY_DIR}/igraph_build)

# Include igraph headers
include_directories(${IGRAPH_DIR}/include)

# Include our own header files (to be added later)
include_directories(${CMAKE_SOURCE_DIR}/include)

# Create executables
add_executable(main src/main.cpp src/louvain.cpp)

# Link igraph library to the executable
target_link_libraries(main igraph)

# Add new executable for reading graph from TSV and running Louvain algorithm
add_executable(main_tsv src/main_tsv.cpp src/louvain.cpp src/graph_reader.cpp)
target_link_libraries(main_tsv igraph)

