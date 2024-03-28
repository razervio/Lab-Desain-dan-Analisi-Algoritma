#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
	private:
		string nama_;
		int umur_;
		string alamat_;
			
	public:
		Mahasiswa(string nama, int umur, string alamat)
			: nama_(nama), umur_(umur), alamat_(alamat) {
				cout<<"Constructor dipanggil"<<endl;
			}
		~Mahasiswa(){
			cout<<"==Destuctor dipanggil=="<<endl;
		}
		
		void TampilkanBiodata(){
			cout<<"Name : "<<nama_<<endl;
			cout<<"Age : "<<umur_<<endl;
			cout<<"Address : "<<alamat_<<endl;
		}	
};

int main(){
	int umr;
	string nam;
	string almt;
	
	cout<<"Masukan nama Anda :";
	getline(cin,nam);
	cout<<"Masukan Usia Anda : ";
	cin>>umr;
	cout<<"Masukan Alamat Anda : ";
	getline(cin>>ws, almt);
	
	
	Mahasiswa mhs(nam, umr, almt);
	
	mhs.TampilkanBiodata();
	
	
	return 0;
}
