 // Problem: Majorty Element  
// Platform: LeetCode
// Question No: 169
// Difficulty: Easy
// Topic: Arrays / Hash Table

 #include<iostream>
 #include<vector>
 using namespace std;

 int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int sm = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            if (sm == 0) {
                ans = nums[i];
            }
            if (ans == nums[i]) {
                sm++;
            } else {
                sm--;
            }
        }
        return ans;
    }

int main() {
    
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << majorityElement(nums);
    return 0;
};