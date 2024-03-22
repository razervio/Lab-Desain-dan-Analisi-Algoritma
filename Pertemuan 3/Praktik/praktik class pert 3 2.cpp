#include <iostream>
#include <string>
using namespace std;

class Hewan {
	private : 
		string nama;
		string spesies;
	
	public :
		void setnama(string n){
			nama = n;
		}
		
		void setSpesies(string s){
			spesies = s;
		}
		
		string getNama(){
			return nama;
		}
		string getSpesies(){
			return spesies;
		}
};


int main(){
	Hewan hewan;
	hewan.setnama("Kucing");
	hewan.setSpesies("Felis catus");
	
	cout<<"Nama : "<<hewan.getNama()<<endl;
	cout<<"Spesies : "<<hewan.getSpesies()<<endl;
	
	return 0;
	
}
