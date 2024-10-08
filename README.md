# igraph Louvain Project to Arachne

This project implements the Louvain community detection algorithm using the **igraph** library. It reads graphs from `.tsv` files, runs the Louvain algorithm, and outputs the number of communities, their modularity, and lists the vertices in each community.

## Features
- Load graphs from a `.tsv` file.
- Run the Louvain community detection algorithm.
- Output the number of communities and the vertices in each community.

## Prerequisites

- **Git**: To clone the repository and manage submodules.
- **CMake**: To configure and build the project.
- **A C++ Compiler**: To compile the project (e.g., GCC or Clang).

## Cloning the Repository

This project includes **igraph** as a Git submodule. When cloning the repository, you need to include the submodule to ensure that the igraph library is also cloned.

To clone the repository and its submodule, use:

```bash
git clone --recurse-submodules https://github.com/mdindoost/Louvain_to_Arachne
