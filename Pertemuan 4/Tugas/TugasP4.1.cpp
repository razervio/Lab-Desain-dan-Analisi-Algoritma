#include <iostream>
using namespace std;

class kontak{
	private:
		string nama[100];
		int no[100];
	public:
		kontak(){
			nama[0] = "Tidak Diketahui";
			no[0] = 000000000000;			
		}
		
		void data(int x[], string a[], int c){
			for(int i = 0; i < c; i++) {
				nama[i] = a[i];
				no[i] = x[i];
			}
		}
		
		void tampil(int j){
			for(int i = 0; i < j; i++){
				cout<<"Kontak ke-"<<i+1<<endl
					<<"Nama: "<<nama[i]<<endl
					<<"Nomor Telpon: "<<no[i]<<endl
					<<"--------------------------------"<<endl;
			}
		}
};

int main(){
	int c = 0, z, d[1000];
	string a, b[1000];
	char x;
	kontak kntk;
	
	do{
		cout<<"Masukan Nama Kontak ke-"<<c+1<<": ";
		getline(cin >> ws, a);
		cout<<"Masukan Nomor: ";
		cin >> d[c];
		
		b[c] = a;
		c++;
		cout<<"Kontak Berhasil Ditambahkan\n";
		
		cout<<"Tambahkan Kontak Lagi? (y/n)";
		cin>>x;
	}
	while((x == 'y' || x == 'X') && c < 10);
	
	kntk.data(d, b, c);

	kntk.tampil(c);

	return 0;
}
