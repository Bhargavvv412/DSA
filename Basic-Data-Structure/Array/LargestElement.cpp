#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Example 1:
// Input: arr[] = {2,5,1,3,0};
// Output: 5
// Explanation: 5 is the largest element in the array. 

// Example2: 
// Input: arr[] = {8,10,5,7,9};
// Output: 10
// Explanation: 10 is the largest element in the array. 

// Brute Force Apporach

int BruteForce(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}

int Recursive(vector<int>& arr,int n){
    int max = arr[0];
    for (int i = 0; i <= n; i++) {
        if (max < arr[i]) {
        max = arr[i];
    }
  }
  return max;
}
 
int main() {
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};
   
    cout<<"The Largest element in the array is: "<<BruteForce(arr1)<<endl;
    cout<<"The Largest element in the array is: "<<BruteForce(arr2) << endl;

    cout << "The R Apporach: " << Recursive(arr1,arr1.size()-1) << endl;
    cout << "The R Apporach: " << Recursive(arr2,arr2.size()-1) << endl;
   
    return 0;
}
