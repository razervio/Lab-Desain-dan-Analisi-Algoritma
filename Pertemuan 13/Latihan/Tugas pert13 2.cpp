#include <iostream>
using namespace std;

class DoubleHash {
    int* hashTable;
    int curr_size;
    int TABLE_SIZE;

public:
    DoubleHash(int size) {
        TABLE_SIZE = size;
        hashTable = new int[TABLE_SIZE];
        for (int i = 0; i < TABLE_SIZE; i++) {
            hashTable[i] = -1;
        }
        curr_size = 0;
    }

    ~DoubleHash() {
        delete[] hashTable;
    }

    bool isFull() {
        return (curr_size == TABLE_SIZE);
    }

    int hash1(int key) {
        return (key % TABLE_SIZE);
    }

    int hash2(int key) {
        return (7 - (key % 7));
    }

    void insertHash(int key) {
        if (isFull())
            return;

        int index = hash1(key);

        if (hashTable[index] != -1) {
            int index2 = hash2(key);
            int i = 1;
            while (true) {
                int newIndex = (index + i * index2) % TABLE_SIZE;

                if (hashTable[newIndex] == -1) {
                    hashTable[newIndex] = key;
                    break;
                }
                i++;
            }
        } else {
            hashTable[index] = key;
        }
        curr_size++;
    }

    void displayHash() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            if (hashTable[i] != -1)
                cout << i << " --> " << hashTable[i] << endl;
            else
                cout << i << " --> Kosong" << endl;
        }
    }

    int searchHash(int key) {
        int index = hash1(key);
        int index2 = hash2(key);
        int i = 0;

        while (hashTable[(index + i * index2) % TABLE_SIZE] != -1) {
            if (hashTable[(index + i * index2) % TABLE_SIZE] == key)
                return (index + i * index2) % TABLE_SIZE;
            i++;
            if (i >= TABLE_SIZE)
                return -1; // Mencegah loop tak terbatas
        }
        return -1;
    }
};

int main() {
    int table_size, num_elements;

    cout << "Masukkan ukuran tabel hash: ";
    cin >> table_size;
    DoubleHash h(table_size);

    cout << "Masukkan jumlah elemen yang akan disisipkan: ";
    cin >> num_elements;

    cout << "Masukkan " << num_elements << " elemen:" << endl;
    for (int i = 0; i < num_elements; i++) {
        int element;
        cin >> element;
        h.insertHash(element);
    }

    cout << "Isi Tabel Hash:" << endl;
    h.displayHash();

    int search_element;
    cout << "Masukkan elemen yang ingin dicari: ";
    cin >> search_element;

    int found_index = h.searchHash(search_element);
    if (found_index != -1)
        cout << search_element << " ditemukan dalam tabel hash pada index " << found_index << "." << endl;
    else
        cout << search_element << " tidak ditemukan dalam tabel hash." << endl;

    return 0;
}

