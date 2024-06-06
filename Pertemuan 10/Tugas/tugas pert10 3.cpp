#include <iostream>
#include <vector>
using namespace std;

class Graph {
private:
    int numVertices;
    vector<vector<pair<int, int>>> adjacencyList;

public:
    Graph(int vertices) {
        numVertices = vertices;
        adjacencyList.resize(vertices);
    }

    void addEdge(int source, int destination, int weight) {
        adjacencyList[source].push_back(make_pair(destination, weight));
    }

    void display() {
        cout << "Daftar Ketetanggaan (Graf Berbobot):" << endl;
        for (int i = 0; i < numVertices; ++i) {
            cout << "Simpul " << i << ": ";
            for (const auto& neighbor : adjacencyList[i]) {
                cout << "-> (" << neighbor.first << ", " << neighbor.second << ") ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph graph(5);

    graph.addEdge(0, 1, 10);
    graph.addEdge(0, 4, 20);
    graph.addEdge(1, 2, 30);
    graph.addEdge(1, 3, 40);
    graph.addEdge(1, 4, 50);
    graph.addEdge(2, 3, 60);
    graph.addEdge(3, 4, 70);

    graph.display();

    return 0;
}

