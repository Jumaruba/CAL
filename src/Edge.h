#ifndef EDGE_H
#define EDGE_H

#include <string>
#include "utils.h"

class Vertex;

class Edge {
    public:
        Edge(Vertex* d, double w);
        Edge(Vertex* d, double w, const std::string& streetName);
        friend class Graph;
        friend class Vertex;
    private:
        Vertex* dest;           // destination vertex
        double weight;          // edge weight
        std::string streetName;
};

#endif //EDGE_H