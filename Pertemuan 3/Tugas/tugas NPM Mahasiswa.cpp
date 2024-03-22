#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
private:
    string nama;
    int NPM;

public:
    void setNama(string n){
        nama = n;
    }

    void setNPM(int m){
        NPM = m;
    }

    string getNama(){
        return nama;
    }

    int getNPM(){
        return NPM;
    }
};

int main(){
    const int jumlahMahasiswa = 3; 
    Mahasiswa mahasiswa[jumlahMahasiswa]; 

    for (int i = 0; i < jumlahMahasiswa; ++i){
        string nama;
        int NPM;

        cout << "Masukkan nama mahasiswa ke-" << i + 1 << ": ";
        getline(cin >> ws, nama); 
        cout << "Masukkan NPM mahasiswa ke-" << i + 1 << ": ";
        cin >> NPM;

        mahasiswa[i].setNama(nama);
        mahasiswa[i].setNPM(NPM);
    }

    for (int i = 0; i < jumlahMahasiswa; ++i){
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "Nama: " << mahasiswa[i].getNama() << endl;
        cout << "NPM : " << mahasiswa[i].getNPM() << endl;
    }

    return 0;
}
