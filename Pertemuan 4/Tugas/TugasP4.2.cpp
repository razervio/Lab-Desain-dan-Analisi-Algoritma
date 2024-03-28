include <iostream>
using namespace std;

class contoh {
	private:
		int nilai; //deklarasi variabel didalem class
	public:
		contoh(int n){ //ambil nilai dari int lewat constructor
			nilai = n; //ambil nilai untuk di taurh di variabel dalam claass
		}
		
		int getnum(){
			return nilai; //kembalikan variabel untuk di couot
		}
};

int main(){
	contoh obj(10); // meng input nilai pada class dan construct
	cout<<"Nilai yang di input: "<<obj.getnum()<<endl; //cout  nilai yang diinput
	
	return 0;
}
