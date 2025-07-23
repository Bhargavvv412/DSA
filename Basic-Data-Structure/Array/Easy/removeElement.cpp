// nums = [3,2,2,3];
// val = 3;

// op = 2

// dry run of the code
// | I | nums[i] | val != num[i] | action | idx | nums   |
// | ----------------------------------------------------|
// | 1 |    3    |  3!=3         | skip   | 0   | [2,2,3]|
// | 2 |    2    |  2!=3         | no     | 1   | [2,2,3]|
// | 3 |    2    |  2!=3         | no     | 2   | [2,2,3]|
// | 4 |    3    |  3!=3         | skip   | 2   | [2,2,] |

#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int idx = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(val != nums[i]) {
            nums[idx] = nums[i];
            idx++;
        }
    }
    return idx; // number of elements after removal
}

int main() {
    vector<int> arr = {3, 2, 2, 3};
    int target = 3;

    int newLength = removeElement(arr, target);

    // Only print valid elements up to newLength
    for(int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
