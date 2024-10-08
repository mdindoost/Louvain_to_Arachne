#include "graph_reader.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include <utility>
#include <algorithm>

// Function to read graph from a .tsv file
void read_graph_from_tsv(const std::string &filename, igraph_t *graph) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Could not open the file: " + filename);
    }

    std::vector<std::pair<int, int>> edges;
    std::string line;

    // Read the file line by line
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        int source, target;

        // Read source and target (split by tab character)
        if (ss >> source >> target) {
            edges.emplace_back(source, target);
            std::cout << "Edge added: " << source << " -> " << target << std::endl; // Debug: Print added edges
        } else {
            std::cerr << "Error reading line: " << line << std::endl;  // Debug: Print error if format is incorrect
        }
    }

    file.close();

    // Find the maximum vertex ID to initialize the graph with the correct number of vertices
    int max_vertex = 0;
    for (const auto &edge : edges) {
        max_vertex = std::max(max_vertex, std::max(edge.first, edge.second)); // Updated: Correctly calculate max
    }

    // Initialize the graph with the correct number of vertices
    igraph_empty(graph, max_vertex + 1, IGRAPH_UNDIRECTED);

    // Add edges to the graph
    for (const auto &edge : edges) {
        igraph_add_edge(graph, edge.first, edge.second);
    }

    std::cout << "Graph loaded from " << filename << " with " 
              << igraph_vcount(graph) << " vertices and " 
              << igraph_ecount(graph) << " edges." << std::endl;
}

