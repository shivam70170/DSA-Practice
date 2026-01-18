// Problem: Reverse string 
// Platform: LeetCode
// Question No: 344
// Difficulty: Easy
// Topic: string

#include <bits/stdc++.h>
using namespace std;

string reverseString(string s) {
    int n = s.size();
    int srt = 0, end = n - 1;

    while (srt < end) {
        swap(s[srt], s[end]);
        srt++;
        end--;
    }
    return s;
}

int main() {
    string s = "hello";

    cout << reverseString(s) << endl;

    return 0;
}
