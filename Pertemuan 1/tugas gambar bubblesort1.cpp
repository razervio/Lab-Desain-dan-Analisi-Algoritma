#include <iostream>

using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
            cout << "proses sorting ";
            for (int k = 0; k < n; k++) {
                cout << arr[k];
            }
            cout << endl;
        }
    }
}

int main() {
    int n;
    cout << "Masukan jumlah elemen: ";
    cin >> n;

    int arr[n];
    cout << "Masukan nilai elemen: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Data sebelum sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
    cout << endl;

    selectionSort(arr, n);

    cout << "Hasil akhir: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
    cout << endl;

    return 0;
}
