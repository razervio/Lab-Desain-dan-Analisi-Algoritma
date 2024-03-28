#include <iostream>
#include <string>

using namespace   std;
class pelajaran{  //Class Name
	public:   //Access specifier
	 pelajaran(){ // Constructor
	  cout << "Ini adalah materi C++ tentang Constructor! ";
    }
};

int main (){
	pelajaran obj; //Membuat object dari sebuah class													
	return 0;
}

