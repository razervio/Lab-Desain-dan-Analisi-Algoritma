#include <iostream>
#include <vector>
#include <utility>

using namespace std;

const int V = 7;

vector < pair < int, int > > adj[V];

void addEdge(int u, int v, int weight) {
    adj[u].push_back(make_pair(v, weight));
    adj[v].push_back(make_pair(u, weight));
}

void printGraph() {
    for (int i = 1; i < V; ++i) {
        cout << "Vertex " << i << ":\n";
        for (vector < pair < int, int > > ::iterator it = adj[i].begin(); it != adj[i].end(); ++it) {
    cout << " -> " << (*it).first + 1 << " (weight: " << (*it).second << ")\n";
}

        cout << endl;
    }
}

int main() {
    addEdge(1, 2, 7);
    addEdge(1, 3, 9);
    addEdge(1, 6, 14);
    addEdge(2, 3, 10);
    addEdge(2, 4, 15);
    addEdge(3, 4, 11);
    addEdge(3, 6, 2);
    addEdge(4, 5, 6);
    addEdge(5, 6, 9);

    printGraph();
    return 0;
}
