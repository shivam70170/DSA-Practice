// Problem: Permuntation In String
// Platform: LeetCode
// Question No: 57
// Difficulty: Medium
// Topic: string/ Hashmap / sliding window / two pointers

#include <bits/stdc++.h>
using namespace std;

bool issamefreq(int freq1[], int freq2[]) {
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1, string s2) {
    int freq[26] = {0};

    // frequency of s1
    for (char ch : s1) {
        freq[ch - 'a']++;
    }

    int windsize = s1.length();

    // check every window
    for (int i = 0; i + windsize <= s2.length(); i++) {
        int windfreq[26] = {0};

        for (int j = 0; j < windsize; j++) {
            windfreq[s2[i + j] - 'a']++;
        }

        if (issamefreq(freq, windfreq)) {
            return true;
        }
    }
    return false;
}

int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";

    if (checkInclusion(s1, s2))
        cout << "True\n";
    else
        cout << "False\n";

    return 0;
}
