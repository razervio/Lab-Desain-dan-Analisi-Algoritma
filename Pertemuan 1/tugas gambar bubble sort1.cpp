#include <iostream>
using namespace std;

int main(){
 int i, arr[100], j, temp,a;
    cout<<"Masukan banyak array : ";
    cin>>a;
    for(i=0; i<a; i++){

        cout<<"Masukan angka ke "<<i+1<<" : ";
		cin>>arr[i];
		cout<<endl;
}
	for(i=0; i<a; i++)
    {
        for(j=0; j<(a-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
       
		}
        cout<<"Proses sorting \n";
        for(j=0; j<a; j++)
            cout<<arr[j]<<" ";
        cout<<endl;
    }
    cout << "Hasil akhir : \n"; 
    for(j=0; j<a; j++) {
    	 cout<<arr[j]<<" ";
	}	
}
