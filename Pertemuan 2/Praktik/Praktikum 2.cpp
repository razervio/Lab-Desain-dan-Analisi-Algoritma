#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int numList[5] = {2, 5, 7, 4, 9};
    int temp;
    cout << "Data Sebelum Diurutkan :\n";
    for (int i = 0; i < 5; i++) {
        cout << setw(3) << numList[i];
    }
    cout << "\n\n";
    
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (numList[j] > numList[j + 1]) {
                temp = numList[j];
                numList[j] = numList[j + 1];
                numList[j + 1] = temp;
            }
        }
    }
    
    cout << "Data setelah diurutkan :\n";
    for (int i = 0; i < 5; i++) {
        cout << setw(3) << numList[i];
    }
    cout << "\n\n";
    return 0;
}
