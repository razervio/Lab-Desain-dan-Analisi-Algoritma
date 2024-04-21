#include <iostream>
using namespace std;

class BangunDatar {
public:
    virtual float hitungLuas() = 0;
};

class PersegiPanjang : public BangunDatar {
private:
    float panjang, lebar;
public:
    PersegiPanjang(float p, float l) : panjang(p), lebar(l) {}

    virtual float hitungLuas() {
        return panjang * lebar;
    }
};

class Segitiga : public BangunDatar {
private:
    float alas, tinggi;
public:
    Segitiga(float a, float t) : alas(a), tinggi(t) {}

    virtual float hitungLuas() {
        return 0.5 * alas * tinggi;
    }
};

int main() {
    float panjangPersegiPanjang, lebarPersegiPanjang, alasSegitiga, tinggiSegitiga;

    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjangPersegiPanjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebarPersegiPanjang;

    cout << "Masukkan alas segitiga: ";
    cin >> alasSegitiga;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggiSegitiga;

    PersegiPanjang persegiPanjang(panjangPersegiPanjang, lebarPersegiPanjang);
    Segitiga segitiga(alasSegitiga, tinggiSegitiga);

    BangunDatar *bDatar1 = &persegiPanjang;
    BangunDatar *bDatar2 = &segitiga;

    cout << "\nLuas Bangun Datar:\n";
    cout << "Luas Persegi Panjang: " << bDatar1->hitungLuas() << endl;
    cout << "Luas Segitiga: " << bDatar2->hitungLuas() << endl;

    return 0;
}
