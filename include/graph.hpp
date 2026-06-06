#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>

class Graph
{
public:
    Graph(int vertices);

    void addEdge(int src, int dst);

    void printGraph();

    void BFS(int source);

private:
    int numVertices;
    std::vector<std::vector<int>> adjList;
};

#endif
