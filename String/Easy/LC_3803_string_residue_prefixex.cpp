// Problem: String Residue Prefixes
// Platform: LeetCode
// Question No: 3803
// Difficulty: Easy
// Topic: string

#include <bits/stdc++.h>
using namespace std;

int countSpecialSubstrings(string s) {
    int n = s.length();
    vector<int> freq(26, 0);
    int distinct = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        char a = s[i];

        if (freq[a - 'a'] == 0) {
            distinct++;
        }
        freq[a - 'a']++;

        int len = i + 1;

        if (distinct == len % 3) {
            count++;
        }
    }
    return count;
}

int main() {
    string s = "abcabc";

    cout << "Count = " << countSpecialSubstrings(s) << endl;

    return 0;
}
