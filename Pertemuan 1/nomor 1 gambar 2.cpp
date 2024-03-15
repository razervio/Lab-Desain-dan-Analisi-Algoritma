#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << '\n';
}

void selectionSort(int arr[], int n) {
    cout << "Data sebelum sorting: ";
    printArray(arr, n);

    for (int i = 0; i < n - 1; ++i) {
        int maxIndex = i; 
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[maxIndex]) { 
                maxIndex = j;
            }
        }
        if (maxIndex != i) {
            swap(arr[i], arr[maxIndex]);
        }
        cout << "Iterasi ke-" << i + 1 << ":\n";
        printArray(arr, n);
    }

    cout << "Data setelah sorting: ";
    printArray(arr, n);
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan nilai elemen: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    return 0;
}

