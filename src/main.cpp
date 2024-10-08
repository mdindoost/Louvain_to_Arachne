#include "louvain.h"
#include <igraph.h>
#include <iostream>

int main() {
    igraph_t graph;

    // Create a sample graph (Zachary's Karate Club graph)
    igraph_small(&graph, 0, IGRAPH_UNDIRECTED, 
        0, 1, 0, 2, 0, 3, 1, 2, 1, 3, 1, 4, 
        2, 3, 2, 4, 3, 5, 4, 5, -1);

    std::cout << "Running Louvain algorithm..." << std::endl;

    // Call Louvain function and get the result
    std::pair<std::vector<int>, double> result = run_louvain(&graph);

    // Output the result
    std::cout << "Louvain Modularity: " << result.second << std::endl;
    std::cout << "Community Structure: ";
    for (int i = 0; i < result.first.size(); i++) {
        std::cout << result.first[i] << " ";
    }
    std::cout << std::endl;

    igraph_destroy(&graph);
    return 0;
}

