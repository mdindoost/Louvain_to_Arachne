#include "graph_reader.h"
#include "louvain.h"
#include <igraph.h>
#include <iostream>
#include <string>
#include <set>       // For storing unique community IDs
#include <map>       // For storing communities and their vertices
#include <vector>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <input_file.tsv>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    igraph_t graph;

    // Read the graph from the TSV file
    try {
        read_graph_from_tsv(filename, &graph);
    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    // Run Louvain algorithm on the graph
    std::cout << "Running Louvain algorithm..." << std::endl;
    std::pair<std::vector<int>, double> result = run_louvain(&graph);

    // Output the result (modularity and community structure)
    std::cout << "Louvain Modularity: " << result.second << std::endl;
    std::cout << "Community Structure: ";
    for (int i = 0; i < result.first.size(); i++) {
        std::cout << result.first[i] << " ";
    }
    std::cout << std::endl;

    // Step 1: Count the number of unique communities
    std::set<int> unique_communities(result.first.begin(), result.first.end());
    std::cout << "Number of unique communities: " << unique_communities.size() << std::endl;

    // Step 2: Group vertices by community and print each community separately
    std::map<int, std::vector<int>> community_map;
    
    // Fill the map with communities and their corresponding vertices
    for (int vertex = 0; vertex < result.first.size(); ++vertex) {
        int community = result.first[vertex];
        community_map[community].push_back(vertex);
    }

    // Print each community separately
    for (const auto& [community_id, vertices] : community_map) {
        std::cout << "Community " << community_id << ": ";
        for (int vertex : vertices) {
            std::cout << vertex << " ";
        }
        std::cout << std::endl;
    }

    igraph_destroy(&graph);
    return 0;
}

