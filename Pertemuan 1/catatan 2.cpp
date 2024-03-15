#include<iostream>
using namespace std;
int main()
{
    int i, arr[3], j, temp;
    cout<<"Masukan 4 bilangan: ";
    for(i=0; i<4; i++)
        cin>>arr[i];
    cout<<endl;
    for(i=0; i<4; i++)
    {
        for(j=0; j<(4-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        cout<<"Tahap "<<i+1<<": ";
        for(j=0; j<4; j++)
            cout<<arr[j]<<" ";
        cout<<endl;
    }
    
    cout << "\n Hasil : "; 
    for(j=0; j<4; j++) {
    	 cout<<arr[j]<<" ";
	}
	
    cout<<endl;
    return 0;
}
