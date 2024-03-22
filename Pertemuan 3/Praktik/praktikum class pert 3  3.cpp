#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
private  :
	string nama;
	int  NPM;
	
public:
	void setnama (string n){
		nama = n;
		}
	
	void setNPM (int m){
	     NPM = m;	
	    }
	    
	string getnama(){
		return nama;
	    }
	    
	int getNPM(){
	    return NPM;	
		}
};

int main(){
	
    Mahasiswa orang;
   
     string nama;
     int NPM;
     
  
     cout << "Masukan nama  mahasiswa: "<< endl; 
     getline(cin,nama);
     cout << "NPM: "<< endl;
     cin >> NPM;
     
    orang.setnama(nama);
    orang.setNPM(NPM);
     
     cout << "nama: "<<orang.getnama() << endl;
     cout << "NPM : "<<orang.getNPM() << endl;

     return 0;   
}

