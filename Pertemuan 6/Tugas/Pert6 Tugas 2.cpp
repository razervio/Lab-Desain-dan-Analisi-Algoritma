#include<iostream>
using namespace std;

class kendaraan {
private:
    string merek;
    int tahunproduksi, jumlahpintu;
public:
    kendaraan(string _merek, int _tahunproduksi, int _jumlahpintu)
        : merek(_merek), tahunproduksi(_tahunproduksi), jumlahpintu(_jumlahpintu) {
    }
    
    void info() {
        cout << "Merek: " << merek << endl;
        cout << "Tahun Produksi: " << tahunproduksi << endl;
    }
};

class Mobil : public kendaraan {
private:
    int jumlahpintu;
public:
    Mobil(string _merek, int _tahunproduksi, int _jumlahpintu)
        : kendaraan(_merek, _tahunproduksi, _jumlahpintu), jumlahpintu(_jumlahpintu) {
    }
    
    void info() {
        kendaraan::info();
        cout << "Jumlah pintu: " << jumlahpintu << endl;
    }
};

int main() {
    string merekmobil;
    int tahunproduksi, jumlahpintu;
    
    cout << "Masukan merek mobil: ";
    getline(cin, merekmobil);
    cout << "Masukan tahun produksi: ";
    cin >> tahunproduksi;
    cout << "Masukan jumlah pintu: ";
    cin >> jumlahpintu;
    
    Mobil mobil(merekmobil, tahunproduksi, jumlahpintu);
    cout << "\nInformasi Mobil:\n";
    mobil.info();

}
