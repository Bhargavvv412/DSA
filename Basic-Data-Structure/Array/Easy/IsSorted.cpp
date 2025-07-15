// Example 1:
// Input: N = 5, array[] = {1,2,3,4,5}
// Output: True.
// Explanation: The given array is sorted i.e Every element in the array is smaller than or equals to its next values, So the answer is True.

#include <bits/stdc++.h>
using namespace std;

// BruteForce
bool BruteForce(vector<int>& arr){
    for(int i = 0; i< arr.size()-1;i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> arr1 = {1,2,3,4,5,6};
    vector<int> arr2 = {5,6,7,1,0,10};

    cout << "Is arr1 sorted? " << (BruteForce(arr1) ? "True" : "False") << endl;
    cout << "Is arr2 sorted? " << (BruteForce(arr2) ? "True" : "False") << endl;

}