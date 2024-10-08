#ifndef LOUVAIN_H
#define LOUVAIN_H

#include <igraph.h>
#include <vector>

// Function to run the Louvain algorithm on a graph
std::pair<std::vector<int>, double> run_louvain(igraph_t *graph);

#endif

