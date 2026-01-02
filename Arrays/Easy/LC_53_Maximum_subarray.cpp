// Problem: Maximum subarray 
// Platform: LeetCode
// Question No: 53
// Difficulty: Easy
// Topic: Arrays / DYANAMIC PROGRAMING

#include<iostream>
#include<vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxsum=-1;
        for(int val:nums){
            sum+=val;
            maxsum=max(sum,maxsum);
            if(sum<0){
                sum=0;
            }
        }return maxsum;
    }

int main() {
    
    vector<int>nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(nums);

    return 0;
};