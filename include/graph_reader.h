#ifndef GRAPH_READER_H
#define GRAPH_READER_H

#include <igraph.h>
#include <string>

// Function to read graph from a .tsv file
void read_graph_from_tsv(const std::string &filename, igraph_t *graph);

#endif

