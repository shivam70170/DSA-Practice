// Problem: Best Time to Buy and Sell Stock 
// Platform: LeetCode
// Question No: 121
// Difficulty: Easy
// Topic: Arrays / DYANAMIC PROGRAMING

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int maxprofit = 0;
    int bestbuy = prices[0];
    int n = prices.size();

    for (int i = 0; i < n; i++) {
        if (prices[i] > bestbuy) {
            maxprofit = max(maxprofit, prices[i] - bestbuy);
        }
        bestbuy = min(bestbuy, prices[i]);
    }
    return maxprofit;
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    cout << maxProfit(prices);
    return 0;
}
