#include "../include/graph.hpp"
#include <iostream>

int main()
{
    Graph g(6);

    g.loadGraph("datasets/sample_graph.txt");

    g.printGraph();

    std::cout << std::endl;

    g.BFS(0);

    return 0;    
}
