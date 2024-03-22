#include <iostream>
#include <string>
using namespace std;

class Nama{
private:
    string nama;
    string judulBuku; 

public:
    void setNama(string n){
        nama = n;
    }

    void setJudulBuku(string judul){ 
        judulBuku = judul;
    }

    string getNama(){
        return nama;
    }

    string getJudulBuku(){ 
        return judulBuku;
    }
};

int main(){
    Nama orang;

    string nama;
    string judulBuku; 

    cout << "Masukan nama mahasiswa: " << endl;
    getline(cin, nama);
    cout << "Judul buku yang dipinjam: " << endl;
    getline(cin, judulBuku); 

    orang.setNama(nama);
    orang.setJudulBuku(judulBuku); 

    cout << "Nama: " << orang.getNama() << endl;
    cout << "Judul buku: " << orang.getJudulBuku() << endl; 
    return 0;
}
