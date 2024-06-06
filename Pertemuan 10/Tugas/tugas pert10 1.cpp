#include <iostream>
#include <vector>

using namespace std;

class Graph {
private:
    int numVertices;
    vector<vector <int> > adjList;

public:
    Graph(int vertices) {
        numVertices = vertices;
        adjList.resize(vertices);
    }

    void addEdge(int src, int dest) {
        if (src >= 0 && src < numVertices && dest >= 0 && dest < numVertices) {
            adjList[src].push_back(dest);
            if (src != dest) 
                adjList[dest].push_back(src);  
        } else {
            cout << "Input simpul tidak valid!" << endl;
        }
    }

    void printGraph() {
        for (int i = 0; i < numVertices; ++i) {
            cout << "Simpul " << i << ":";
         for (int j = 0; j < adjList[i].size(); ++j) {
    if (j == 0) {
        cout << " " << adjList[i][j];
    } else {
        cout << " -> " << adjList[i][j];
    }
}

            cout << endl;
        }
    }
};

int main() {
    int vertices = 5;
    Graph graph(vertices);

    graph.addEdge(0, 1);
    graph.addEdge(0, 4);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 3);
    graph.addEdge(3, 4);

    graph.printGraph();

    return 0;
}

