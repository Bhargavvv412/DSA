// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.





#include <iostream>
#include <vector>
using namespace std;



int profit(vector<int>& arr){
    int profit = 0;
    int buyPrice = arr[0];
    for(int i = 0;i<arr.size();i++){
        if (buyPrice>arr[i]){
            buyPrice = arr[i];
        }
        profit = max(profit,arr[i]-buyPrice);
    }
    return profit;
}


int main(){
    vector<int> arr ={7,1,5,3,6,4};
    cout << profit(arr);
}