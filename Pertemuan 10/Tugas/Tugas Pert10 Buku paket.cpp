#include <iostream>
#include <algorithm>

using namespace std;

const int INF = 10;

int main() {
    int n;
    cout << "Masukkan Jumlah Kota: ";
    cin >> n;

    int costMatrix[n][n];

    cout << "Nilai Cost Matrix:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Cost Element Baris ke-: " << i + 1 << "\n";
        for (int j = 0; j < n; ++j) {
            cin >> costMatrix[i][j];
        }
    }

    cout << "Cost List:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << costMatrix[i][j] << " ";
        }
        cout << "\n";
    }

    int path[n];
    int minCost = INF;

    int cities[n];
    for (int i = 0; i < n; ++i) cities[i] = i;

    do {
        int currentCost = 0;
        for (int i = 1; i < n; ++i) {
            currentCost += costMatrix[cities[i - 1]][cities[i]];
        }
        currentCost += costMatrix[cities[n - 1]][cities[0]]; 

        if (currentCost < minCost) {
            minCost = currentCost;
            copy(cities, cities + n, path);
        }
    } while (next_permutation(cities + 1, cities + n));

    cout << "\nJalur Terpendek: \n";
    for (int i = 0; i < n; ++i) {
        cout << path[i] + 1 << " ";
    }
    cout << path[0] + 1 << "\n"; 

    cout << "\nMinimum Cost: " << minCost << "\n";

    return 0;
}

