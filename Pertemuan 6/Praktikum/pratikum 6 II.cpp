#include <iostream>
using namespace std;

class data {
private:
    int usia[100];
    double ipk[100];
    string nama[100];

public:
    data(int a[], string b[], double c[], int j) {
        for (int m = 0; m < j; m++) {
            usia[m] = a[m];
            nama[m] = b[m];
            ipk[m] = c[m];
        }
    }

    string getnama(int a) {
        return nama[a];
    }

    double getipk(int a) {
        return ipk[a];
    }

    int getusia(int a) {
        return usia[a];
    }
};

int main() {
    int usia[100], a;
    double ipk[100];
    string nama[100], b;

    cout << "Masukan jumlah mahasiswa: ";
    cin >> a;
    for (int i = 0; i < a; i++) {
        cout << "Mahasiswa ke " << i + 1 << endl;
        cout << "Nama: ";
        cin.ignore();
		getline(cin, nama[i]);
        cout << "Usia: ";
        cin >> usia[i];
        cout << "IPK: ";
        cin >> ipk[i];
    }

    data mahasiswa(usia, nama, ipk, a);

    for (int i = 0; i < a; i++) {
        cout << "Mahasiswa ke " << i + 1 << endl;
        cout << "Nama: " << mahasiswa.getnama(i) << endl;
        cout << "Usia: " << mahasiswa.getusia(i) << endl;
        cout << "IPK: " << mahasiswa.getipk(i) << endl;
    }

    return 0;
}
