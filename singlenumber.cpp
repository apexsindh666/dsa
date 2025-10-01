#include<iostream>
#include<vector>
using namespace std;

int singlenum(vector<int>& nums) {
    int ans = 0;
    for (size_t i = 0; i < nums.size(); ++i) {
        ans ^= nums[i];
    }
    return ans;
}

int main() {
    int arr[] = {4, 1, 2, 1, 2};
    vector<int> nums(arr, arr + sizeof(arr)/sizeof(arr[0]));

    int sn = singlenum(nums);
    cout << sn << endl;
    return 0;
}
