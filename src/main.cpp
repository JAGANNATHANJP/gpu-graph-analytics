#include "../include/graph.hpp"
#include <iostream>

int main()
{
    Graph g(6);

    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,3);
    g.addEdge(2,4);
    g.addEdge(3,5);
    g.addEdge(4,5);

    g.printGraph();

    std::cout << std::endl;

    g.BFS(0);

    return 0;    
}
