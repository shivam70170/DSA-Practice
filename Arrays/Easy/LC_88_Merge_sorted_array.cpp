// Problem: Merge Sorted Array 
// Platform: LeetCode
// Question No: 88
// Difficulty: Easy
// Topic: Arrays / Two Pointer / sorting

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int space = m + n - 1;
    int i = m - 1, j = n - 1;

    while (i >= 0 && j >= 0) {
        if (nums1[i] >= nums2[j]) {
            nums1[space] = nums1[i];
            i--;
        } else {
            nums1[space] = nums2[j];
            j--;
        }
        space--;
    }

    while (j >= 0) {
        nums1[space] = nums2[j];
        space--;
        j--;
    }
}

int main() {
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 3, n = 3;

    merge(nums1, m, nums2, n);

    for (int x : nums1) {
        cout << x << " ";
    }

    return 0;
}
