#include <iostream>

using namespace std;

void printArray(string arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << endl;
    }
}

void selectionSort(string arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    int n;
    cout << "Masukkan Jumlah judul buku: ";
    cin >> n;

    string kata[n];

    cout << "Masukkan judul buku:\n";
    for (int i = 0; i < n; ++i) {
        cin >> kata[i];
    }

    selectionSort(kata, n);

    cout << "\nJudul setelah diurutkan:\n";
    printArray(kata, n);

    return 0;
}
