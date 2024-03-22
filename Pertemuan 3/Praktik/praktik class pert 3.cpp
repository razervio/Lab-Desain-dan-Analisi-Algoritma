#include <iostream>
#include <string>
using namespace std;

class Silsilah {
protected:
    string orangtua = "Albert Wijaya dan Jenny Lim";
    string anakanak = "Agatha Wijaya dan Jonathan Wijaya";

public:
    string cekSilsilah() {
        return "Ayah bernama " + orangtua.substr(0, orangtua.find(' ')) +
               " dan ibu bernama " + orangtua.substr(orangtua.find(" ") + 1);
    }
};

class Cucu : public Silsilah {
protected:
    string cucu = "Wilbert Tan dan Rayanza Wijaya";

public:
    string cekAnak() {
        return "Anak pertama keluarga Wijaya adalah " + anakanak.substr(0, anakanak.find(" "));
    }
};

class Anak : public Cucu {
public:
    string lihatSilsilahnya() {
        return "Silsilah keluarga Wijaya";
    }

    string cekCucu() {
        return "Cucu pertama bernama " + cucu.substr(0, cucu.find(" ")) +
               " dan Cucu kedua bernama " + cucu.substr(cucu.find(" ") + 1);
    }
};

int main() {
    Anak silsilahWijaya;

    cout << silsilahWijaya.lihatSilsilahnya() << endl;
    cout << silsilahWijaya.cekSilsilah() << endl;
    cout << silsilahWijaya.cekAnak() << endl;
    cout << silsilahWijaya.cekCucu() << endl;

    return 0;
}
