// Problem: String Compression
// Platform: LeetCode
// Question No: 443
// Difficulty: Medium
// Topic: string / Two pointers

#include <bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size();
    int idx = 0;

    for (int i = 0; i < n; i++) {
        char ch = chars[i];
        int count = 0;

        while (i < n && chars[i] == ch) {
            count++;
            i++;
        }

        // write character
        chars[idx++] = ch;

        // write count if >1
        if (count > 1) {
            string str = to_string(count);
            for (char dig : str) {
                chars[idx++] = dig;
            }
        }

        i--; // important
    }

    chars.resize(idx);
    return idx;
}

int main() {
    vector<char> chars = {'a','a','b','b','c','c','c'};

    int len = compress(chars);

    cout << "Compressed Length = " << len << endl;
    cout << "Compressed String = ";

    for (char c : chars)
        cout << c << " ";

    cout << endl;

    return 0;
}
