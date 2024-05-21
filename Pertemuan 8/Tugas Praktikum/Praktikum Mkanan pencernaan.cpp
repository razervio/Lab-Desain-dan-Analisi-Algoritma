#include <iostream>
#include <queue>
#include <string>

using namespace std;

void makan(const string& makanan) {
    cout << "Sedang memakan " << makanan << endl;
}

void mencerna(const string& makanan) {
    cout << "Sedang mencerna " << makanan << endl;
}

void mengingat(const string& makanan) {
    cout << "Sedang ingat " << makanan << endl;
}

int main() {
    queue<string> antrian; 
    
    while (true) {
        cout << "\nPilih aksi:" << endl;
        cout << "1. Makan makanan baru" << endl;
        cout << "2. Cerna makanan" << endl;
        cout << "3. Inget makan apa" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilihan Anda: ";
        string pilihan;
        getline(cin, pilihan);

        if (pilihan == "1") {
            string makanan;
            cout << "Makan makanan baru: ";
            getline(cin, makanan);
            antrian.push(makanan);
            cout << makanan << " dimasukkan ke dalam antrian." << endl;
        } else if (pilihan == "2") {
            if (antrian.empty()) {
                cout << "LAPEEER EMAKKK." << endl;
            } else {
                string makanan = antrian.front();
                antrian.pop();
                makan(makanan);
                mencerna(makanan);
            }
        } else if (pilihan == "3") {
            if (antrian.empty()) {
                cout << "LAPEEER EMAKKK." << endl;
            } else {
                cout << "Makanan dalam antrian:" << endl;
                queue<string> tempAntrian = antrian;
                while (!tempAntrian.empty()) {
                    cout << "- " << tempAntrian.front() << endl;
                    tempAntrian.pop();
                }
            }
        } else if (pilihan == "4") {
            cout << "Program selesai." << endl;
            break;
        } else {
            cout << "Pilihan tidak valid. Silakan pilih lagi." << endl;
        }
    }

    return 0;
}

