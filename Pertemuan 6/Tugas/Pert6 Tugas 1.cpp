#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
protected:
    string status;
    string nama;
    int umur;
    string jurusan;
    string fakultas;

public:
    Mahasiswa(string _status, string _nama, int _umur, string _jurusan, string _fakultas)
        : status(_status), nama(_nama), umur(_umur), jurusan(_jurusan), fakultas(_fakultas) {}

    ~Mahasiswa() {}

    void tampilkanData() {
        cout << "Jenis: " << status << endl;
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << " tahun" << endl;
        cout << "Jurusan: " << jurusan << endl;
        cout << "Fakultas: " << fakultas << endl;
    }

    void masukkanData() {
        cout << "Masukkan nama: ";
        cin >> nama;
        cout << "Masukkan umur: ";
        cin >> umur;
        cout << "Masukkan jurusan: ";
        cin >> jurusan;
        cout << "Masukkan fakultas: ";
        cin >> fakultas;
    }
};

class Alumni : public Mahasiswa {
public:
    Alumni(string _nama, int _umur, string _jurusan, string _fakultas)
        : Mahasiswa("Alumni", _nama, _umur, _jurusan, _fakultas) {}

    void tampilkanData() {
        Mahasiswa::tampilkanData();
    }

    void masukkanData() {
        Mahasiswa::masukkanData();
    }
};

int main() {
    Mahasiswa* daftarMahasiswa[5];

    for (int i = 0; i < 5; ++i) {
        cout << "Apakah mahasiswa ke-" << i+1 << " adalah mahasiswa Aktif atau Alumni? (Aktif / Alumni): ";
        string status;
        cin >> status;

        if (status == "Aktif") {
            daftarMahasiswa[i] = new Mahasiswa(status, "", 0, "", "");
            daftarMahasiswa[i]->masukkanData();
        } else if (status == "Alumni") {
            daftarMahasiswa[i] = new Alumni("", 0, "", "");
            daftarMahasiswa[i]->masukkanData();
        } else {
            cout << "Masukan tidak valid. Harap masukkan 'Aktif' atau 'Alumni'." << endl;
            --i;
        }
    }

    cout << "\nData Mahasiswa:\n";
    for (int i = 0; i < 5; ++i) {
        daftarMahasiswa[i]->tampilkanData();
        cout << endl;
    }

    for (int i = 0; i < 5; ++i) {
        delete daftarMahasiswa[i];
    }

    return 0;
}
