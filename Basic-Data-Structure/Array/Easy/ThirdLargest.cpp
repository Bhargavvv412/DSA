#include <bits/stdc++.h>
using namespace std;

// sorting elemnts and taking the 3rd last elemnt from the array.
// time compleity is O(n log(n))
int ThirdLargest1(vector<int>& arr){
    sort(arr.begin(),arr.end());

    return arr[arr.size()-3];
}

// using O(n)

int ThirdLargest2(vector<int>& arr){
    int Largest = INT_MIN;
    int SecondLarge = INT_MIN;
    int ThirdLargest = INT_MIN;
    for(int i = 0; i < arr.size();i++){
        if(Largest<arr[i]){
            Largest = arr[i+1];
        }
    }
    for(int i = 0; i<arr.size();i++){
        if(arr[i]>SecondLarge && arr[i]<Largest){
            SecondLarge = arr[i];
        }
    }
    for(int i = 0; i<arr.size();i++){
        if(arr[i]>ThirdLargest && arr[i]<SecondLarge){
            ThirdLargest = arr[i];
        }
    }
    return ThirdLargest;
}

int main(){
    vector<int> arr1 = {1,2,3,4,5,6};
    vector<int> arr2 = {10,20,30,50};

    cout << ThirdLargest1(arr1)<<endl;
    cout << ThirdLargest1(arr2)<<endl;

    cout << ThirdLargest2(arr1)<<endl;
    cout << ThirdLargest2(arr2)<<endl;

    return 0;
}