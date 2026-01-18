// Problem: Reverse string prefix
// Platform: LeetCode
// Question No: 3794
// Difficulty: Easy
// Topic: string

#include <bits/stdc++.h>
using namespace std;

string reverseFirstK(string s, int k) {
    int srt = 0;
    int end = k - 1;

    while (srt < end) {
        swap(s[srt], s[end]);
        srt++;
        end--;
    }
    return s;
}

int main() {
    string s = "abcdef";
    int k = 3;

    cout << reverseFirstK(s, k) << endl;

    return 0;
}
