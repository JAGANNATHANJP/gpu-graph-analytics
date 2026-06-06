#include "../include/graph.hpp"
#include <iostream>
#include <queue>

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

void Graph::BFS(int source)
{
    std::vector<bool> visited(numVertices, false);

    std::vector<int> distance(numVertices, -1);

    std::queue<int> q;

    visited[source] = true;

    distance[source] = 0;

    q.push(source);

    std::cout << "BFS Traversal: ";

    while(!q.empty())
    {
        int current = q.front();

        q.pop();

        std::cout << current << " ";

        for(int neighbor : adjList[current])
        {
            if(!visited[neighbor])
            {
                visited[neighbor] = true;

                distance[neighbor] =
                    distance[current] + 1;

                q.push(neighbor);
            }
        }
    }

    std::cout << std::endl;

    std::cout << "\nDistances from source "
              << source << ":\n";

    for(int i = 0; i < numVertices; i++)
    {
        std::cout
            << "Node "
            << i
            << " : "
            << distance[i]
            << std::endl;
    }
}
