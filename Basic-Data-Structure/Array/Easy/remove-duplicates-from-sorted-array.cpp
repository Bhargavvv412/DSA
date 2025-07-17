#include <bits/stdc++.h>
using namespace std;

int remove(vector<int>& arr){
    // if(arr.empty() == NULL){
    //     return 0;
    // }

    if (arr.empty()) return 0;

        int i = 1;

        for (int j = 1; j < arr.size(); j++) {
            if (arr[j] != arr[i - 1]) {
                arr[i] = arr[j];
                i++;
            }
        }

        return i;
}


int main(){
    int n;
    cout << "Enter The Array Size: ";
    cin >> n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cout << i+1 <<" ";
        cin >> arr[i];
    }

    cout << remove(arr);

    return 0;
}