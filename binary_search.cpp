
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int binary_search(vector<int> nums, int target){
    if (nums.size() == 0)
        return -1;

    int left = 0, right = nums.size() - 1;
    while (left <= right){
        int mid = left + (right - left)/2;
        if (nums[mid] == target){return mid; }
        else if (nums[mid] < target) { left = mid + 1; }
        else { right = mid - 1; }
    }
    return -1;

}

int main(){
    vector<int> nums = {-1, 0, 2, 4, 9, 12, 13};
    int target = 15;
    int index = binary_search(nums, target);

    cout << index << " index found.";

}