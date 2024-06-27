#include <iostream>
#include <cmath>

using namespace std;

class HashTable {
private:
    int* table;
    int size;
    int prime; 

    int hash1(int key) {
        return key % size;
    }

    int hash2(int key) {
        return prime - (key % prime);
    }

    int findPrimeLessThan(int num) {
        for (int i = num - 1; i >= 2; --i) {
            bool isPrime = true;
            for (int j = 2; j <= sqrt(i); ++j) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                return i;
            }
        }
        return 2; 
    }

public:
    HashTable(int size) {
        this->size = size;
        table = new int[size];
        for (int i = 0; i < size; ++i) {
            table[i] = -1; 
        }
        prime = findPrimeLessThan(size);
    }

    ~HashTable() {
        delete[] table;
    }

    void insert(int key) {
        int index = hash1(key);
        if (table[index] == -1) {
            table[index] = key;
            cout << "Masuk " << key << " di index " << index << endl;
        } else {
            cout << "Tabrakan di index " << index << endl;
            int stepSize = hash2(key);
            int i = 1;
            while (table[(index + i * stepSize) % size] != -1 && i < size) {
                cout << "Tabrakan di index " << (index + i * stepSize) % size << endl;
                ++i;
            }
            if (i < size) {
                table[(index + i * stepSize) % size] = key;
                cout << "Masuk " << key << " di index " << (index + i * stepSize) % size << endl;
            } else {
                cout << "TabLe penuh. Tidak dapat memasukkan  " << key << endl;
            }
        }
    }

    void display() {
        cout << "Isi hash table : " << endl;
        for (int i = 0; i < size; ++i) {
            if (table[i] != -1) {
                cout << "Index " << i << ": " << table[i] << endl;
            } else {
                cout << "Index " << i << ": kosong" << endl;
            }
        }
    }
};

int main() {
    int size, n, key;
    cout << "Masukkan ukuran tabel hash: ";
    cin >> size;

    HashTable ht(size);

    cout << "Masukkan jumlah kunci yang akan dimasukkan: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Masukan key " << i + 1 << ": ";
        cin >> key;
        ht.insert(key);
    }

    ht.display();

    return 0;
}

