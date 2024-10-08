#include "louvain.h"
#include <iostream>

// Function to run the Louvain algorithm
std::pair<std::vector<int>, double> run_louvain(igraph_t *graph) {
    igraph_vector_int_t membership;
    igraph_real_t modularity;
    igraph_real_t resolution = 1.0;  // Default resolution for Louvain

    // Initialize the membership vector
    igraph_vector_int_init(&membership, 0);

    // Run the Louvain algorithm (multilevel community detection)
    igraph_community_multilevel(graph, nullptr, resolution, &membership, nullptr, nullptr);

    // Calculate the final modularity (pass nullptr for weights, and get modularity as last argument)
    igraph_modularity(graph, &membership, nullptr, 1.0, IGRAPH_UNDIRECTED, &modularity);

    // Prepare the result to return (convert igraph_vector_int_t to std::vector<int>)
    std::vector<int> community_structure;
    for (int i = 0; i < igraph_vector_int_size(&membership); i++) {
        community_structure.push_back(VECTOR(membership)[i]);
    }

    // Cleanup
    igraph_vector_int_destroy(&membership);

    // Return community structure and modularity as a pair
    return {community_structure, modularity};
}

