#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int Vertex, Edge, visited[10], Graph[10][10];

void DepthFirstSearch(int source) {
    cout << "Depth-First Search: ";
    int i = source;
    visited[i] = 1;
    cout << i + 1 << " ";
    for (int j = 0; j < Vertex; j++) {
        if (Graph[i][j] == 1 && visited[j] == 0) {
            DepthFirstSearch(j);
        }
    }
}

void BreadthFirstSearch(int source) {
    cout << "\nBreadth-First Search: ";
    queue<int> q;
    q.push(source);
    visited[source] = 1;
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        cout << current + 1 << " ";
        for (int i = 0; i < Vertex; i++) {
            if (Graph[current][i] == 1 && visited[i] == 0) {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int vertex1, vertex2, sourceV;
    cout << "Enter no. of edges: ";
    cin >> Edge;
    cout << "Enter no. of vertices: ";
    cin >> Vertex;
    for (int i = 0; i < Vertex; i++) {
        for (int j = 0; j < Vertex; j++)
            Graph[i][j] = 0;
    }
    for (int i = 0; i < Edge; i++) {
        cout << "Enter the edges in both the vertex : ";
        cin >> vertex1 >> vertex2;
        Graph[vertex1 - 1][vertex2 - 1] = 1;
        Graph[vertex2 - 1][vertex1 - 1] = 1; // Making the graph undirected
    }
    for (int i = 0; i < Vertex; i++) {
        for (int j = 0; j < Vertex; j++)
            cout << " " << Graph[i][j] << " ";
        cout << "\n";
    }
    cout << "Enter source Vertex: ";
    cin >> sourceV;
    
    // Initialize visited array
    for (int i = 0; i < Vertex; i++)
        visited[i] = 0;

    DepthFirstSearch(sourceV - 1); // DFS
    // Reset visited array
    for (int i = 0; i < Vertex; i++)
        visited[i] = 0;
    BreadthFirstSearch(sourceV - 1); // BFS

    return 0;
}
