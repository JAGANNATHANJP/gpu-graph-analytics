#include <string>
#include <utility>
#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>

class Graph
{
public:
    Graph(int vertices);

    void addEdge(int src, int dst, int weight);

    void printGraph();

    void BFS(int source);

    void Dijkstra(int source);

    void loadGraph(const std::string& filename);

    void buildCSR();

    void printCSR();

private:
    int numVertices;
    std::vector<std::vector<std::pair<int,int>>> adjList;

    std::vector<int> rowOffsets;

    std::vector<int> colIndices;

    std::vector<int> edgeWeights;
};

#endif
