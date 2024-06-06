#include <iostream>
#include <vector>
using namespace std;

void tambahEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
}

void tampilkanGraph(const vector<int> adj[], int V) {
    for (int i = 0; i < V; ++i) {
        cout << "Simpul " << i << ":";
        if (adj[i].empty()) {
            cout << " ";
        } else {
            for (int j = 0; j < adj[i].size(); ++j) {
                cout << " -> " << adj[i][j];
            }
        }
        cout << endl;
    }
}

int main() {
    int V = 5; 
    vector<int> adj[V];

    tambahEdge(adj, 0, 1);
    tambahEdge(adj, 0, 4);
    tambahEdge(adj, 1, 2);
    tambahEdge(adj, 1, 3);
    tambahEdge(adj, 1, 4);
    tambahEdge(adj, 2, 3);
    tambahEdge(adj, 3, 4);

    cout << "Daftar Ketetanggaan (Graf Berarah):" << endl;
    tampilkanGraph(adj, V);

    return 0;
}


