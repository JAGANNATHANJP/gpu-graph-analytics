#include "../include/graph.hpp"
#include <iostream>
#include <chrono>

int main()
{
    Graph g(6);

    g.loadGraph("datasets/sample_graph.txt");

    g.printGraph();

    std::cout << std::endl;

    auto start =
        std::chrono::high_resolution_clock::now();

    g.BFS(0);

    auto end =
        std::chrono::high_resolution_clock::now();

    auto duration =
        std::chrono::duration_cast<
            std::chrono::microseconds>
        (end - start);

    std::cout
        << "\nBFS Runtime: "
        << duration.count()
        << " microseconds"
        << std::endl;

    return 0;    
}
