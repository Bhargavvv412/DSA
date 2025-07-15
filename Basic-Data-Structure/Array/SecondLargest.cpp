#include <bits/stdc++.h>
using namespace std;

// In this we sort the array and select the last two elemnt
int BruteForce(vector<int>& arr){
    sort(arr.begin(),arr.end());
    int SecondLarge = arr[arr.size()-2];
    return SecondLarge;
}

// without function of sort

int sort(vector<int>& arr){
    int Largest = INT_MIN;
    int SecondLarge = INT_MIN;

    for(int i=0;i<arr.size();i++){
        Largest = max(Largest,arr[i]);
    }

    for(int i =0; i< arr.size();i++){
        if(arr[i]>SecondLarge && arr[i]!=Largest){
            SecondLarge = arr[i];
        }
    }
    return SecondLarge;
}

int main(){
    vector<int> arr1 = {1,2,3,4,5,6};
    vector<int> arr2 = {8,10,5,7,9};

    cout << "arr1 by bruteforce " << BruteForce(arr1) << endl;
    cout << "arr2 by bruteforce " << BruteForce(arr2) << endl;

    cout << "arr1 by other apporach " << sort(arr1) << endl;
    cout << "arr2 by other apporach " << sort(arr2) << endl;

}