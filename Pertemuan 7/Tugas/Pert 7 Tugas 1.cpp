#include <iostream>
#include <algorithm>
#include <conio.h>
#include <string.h>
using namespace std;

struct buku{
	string judul_buku;
	int rak;
};

int binarysearch(const buku perpus[], string x, int r){
	int l = 0;
	int R = r-1;
	while(l <= R){
		int mid = (l + R) /2;
		if(x == perpus[mid].judul_buku){
			return mid;
		}
		if(x >= perpus[mid].judul_buku){
			l = mid + 1;
		}
		else{
			R = mid - 1;
		}
	}
	return -1;
}

int main(){
	int a, z;
	string buk, c;
	buku perpus[] = {
		{"Alkitab", 1 }, {"Amda", 3 }, {"Conan", 5 }, {"Laskar-Pelangi", 3 }, {"Logaritma", 8 },
		{"Merdeka", 6 }, {"Bumi-Manusia", 3 }, {"Statistik", 8 }, {"Al'Quran", 1 }, {"Hidup-Atau-Mati",6 },
		{"Ben10", 5}, {"Aljabar-Linear", 8}, {"Naruto", 5}, {"Bandung-BerApi", 6}
	};
	z = sizeof(perpus)/sizeof(perpus[0]);
	
//	sort(perpus,perpus+z);
	
	for(int i = 0; i < z; i++){
		cout<<"Judul Buku : "<<perpus[i].judul_buku
			<<"\t\tRak ke-"<<perpus[i].rak<<endl;
	}
	
	cout<<"Masukan Judul Buku yang ingin di cari = ";
	cin>>buk;
	
	a = binarysearch(perpus, buk, z);
	
	cout<<"Buku dengan Judul "<<buk<<" berada pada Rak ke-"<<perpus[a].rak<<endl;
	
	return 0;
}
