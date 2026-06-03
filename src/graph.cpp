#include "../include/graph.hpp"
#include <iostream>

Graph::Graph(int vertices)
{
    numVertices = vertices;
    adjList.resize(vertices);
}

void Graph::addEdge(int src, int dst)
{
    adjList[src].push_back(dst);
}

void Graph::printGraph()
{
    for(int i = 0; i < numVertices; i++)
    {
        std::cout << i << ": ";

        for(int neighbor : adjList[i])
        {
            std::cout << neighbor << " ";
        }

        std::cout << std::endl;
    }
}
