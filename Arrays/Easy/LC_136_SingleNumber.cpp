// Problem: Single Number
// Platform: LeetCode
// Question No: 136
// Difficulty: Easy
// Topic: Arrays / Bit Manipulation


#include<iostream>
#include<vector>
using namespace std;

// Given a non-empty array of integers nums, every element
// appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and
//  use only constant extra space.

int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int val:nums){
            ans^=val;
        }
        return ans;
        
    }

int main() {
    vector<int> nums = {4,1,2,1,2};
    cout << singleNumber(nums);
    return 0;
};