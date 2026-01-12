// Problem: Binary Search 
// Platform: LeetCode
// Question No: 704
// Difficulty: Easy
// Topic: Arrays

#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int n = nums.size();
    int srt = 0, end = n - 1;

    while (srt <= end) {
        int mid = srt + (end - srt) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            srt = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> nums = {1, 3, 5, 7, 9, 11};
    int target = 7;

    int index = search(nums, target);

    if (index != -1)
        cout << "Target found at index: " << index << endl;
    else
        cout << "Target not found" << endl;

    return 0;
}
