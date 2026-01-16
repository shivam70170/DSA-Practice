// Problem: Next Permuntation 
// Platform: LeetCode
// Question No: 31
// Difficulty: Medium
// Topic: Arrays / Two Pointer 

#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int pivot = -1;
    int n = nums.size();

    // Step 1: Find pivot
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            pivot = i;
            break;
        }
    }

    // Step 2: If no pivot, reverse whole array
    if (pivot == -1) {
        reverse(nums.begin(), nums.end());
        return;
    }

    // Step 3: Swap pivot with next greater element
    for (int i = n - 1; i > pivot; i--) {
        if (nums[i] > nums[pivot]) {
            swap(nums[i], nums[pivot]);
            break;
        }
    }

    // Step 4: Reverse right part
    reverse(nums.begin() + pivot + 1, nums.end());
}

int main() {
    vector<int> nums = {1, 2, 3};

    nextPermutation(nums);

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}
