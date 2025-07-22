// row = 5;
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the Rows: ";
    cin >> rows;
    for(int i=0;i<=rows;i++){
        for(int j=0; j<i;j++){
            cout << "* ";
        }
        cout <<"\n";
    }

    return 0;
}