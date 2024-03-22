#include <iostream>
using namespace std;

// Fungsi untuk menukar dua elemen dalam array
void swap(int arr[], int pos1, int pos2) {
    int temp;
    temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}


int partition(int arr[], int low, int high, int pivot) {
    int i = low - 1;
    for (int j = low; j < high; j++) {
       //pindah pivotkecil  ke sisi kiri
        if (arr[j] >= pivot) {
            i++;
            swap(arr, i, j); //tukkar elemen besar dan kecil
        }
    }
    swap(arr, i + 1, high); // tukar posisi i + i
    return i + 1; 
}

// Fungsi rekursif untuk urutkan array 
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int pos = partition(arr, low, high, pivot);

        // panggil quicksort untuk atur array
        quickSort(arr, low, pos - 1);
        quickSort(arr, pos + 1, high);
    }
}

int main() {
    int n;
    cout << "Tentukan panjang array: ";
    cin >> n;
    int arr[n];
    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1); 
    cout << "Array yang telah diurutkan secara descending: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t"; // cetak array yang terururt
    }
    cout << endl;
    return 0;
}
