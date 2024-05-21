#include <iostream>
#include <queue>
#include <string>

using namespace std;

void displayMenu() {
    cout << "1. Tambah Antrian" << endl;
    cout << "2. Layani Antrian" << endl;
    cout << "3. Tampilkan Antrian" << endl;
    cout << "4. Keluar" << endl;
    cout << "Pilih opsi: ";
}

int main() {
    queue<string> antrian;
    int pilihan;
    string nama;

    do {
        displayMenu();
        cin >> pilihan;
        cin.ignore();
        
        switch(pilihan) {
            case 1:
                cout << "Masukkan nama pelanggan: ";
                getline(cin, nama);
                antrian.push(nama);
                cout << "Pelanggan " << nama << " telah ditambahkan ke antrian." << endl;
                break;
            case 2:
                if (!antrian.empty()) {
                    cout << "Melayani pelanggan: " << antrian.front() << endl;
                    antrian.pop();
                } else {
                    cout << "Antrian kosong!" << endl;
                }
                break;
            case 3:
                if (!antrian.empty()) {
                    queue<string> temp = antrian;
                    cout << "Daftar antrian saat ini:" << endl;
                    while (!temp.empty()) {
                        cout << temp.front() << endl;
                        temp.pop();
                    }
                } else {
                    cout << "Antrian kosong!" << endl;
                }
                break;
            case 4:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
        cout << endl;
    } while (pilihan != 4);

    return 0;
}
