// Problem: Count Operations To Obtain Zeros
// Platform: LeetCode
// Question No: 2169
// Difficulty: Easy
// Topic: Math


#include <bits/stdc++.h>
using namespace std;

int countOperations(int num1, int num2) {
    int count = 0;
    while (num1 != 0 && num2 != 0) {
        if (num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
        count++;
    }
    return count;
}

int main() {
    int num1 = 5, num2 = 10;

    cout << "Count Operations = "
         << countOperations(num1, num2) << endl;

    return 0;
}
