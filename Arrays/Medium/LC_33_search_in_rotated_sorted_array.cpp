// Problem: Search in rotated sorted array
// Platform: LeetCode
// Question No: 33
// Difficulty: Medium
// Topic: Arrays / Binary Search

#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int srt = 0, end = nums.size() - 1;

    while (srt <= end) {
        int mid = srt + (end - srt) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[srt] <= nums[mid]) { // left sorted
            if (nums[srt] <= target && target <= nums[mid])
                end = mid - 1;
            else
                srt = mid + 1;
        } else { // right sorted
            if (nums[mid] <= target && target <= nums[end])
                srt = mid + 1;
            else
                end = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 0;

    cout << search(nums, target);
    return 0;
};
