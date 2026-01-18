// Problem: Valid Palidrome
// Platform: LeetCode
// Question No: 125
// Difficulty: Easy
// Topic: string

#include <bits/stdc++.h>
using namespace std;

bool isalphanumerical(char ch){
    if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
        return true;
    }
    return false;
}

bool isPalindrome(string s) {
    int srt = 0, end = s.length() - 1;

    while (srt < end) {
        if (!isalphanumerical(s[srt])) {
            srt++;
            continue;
        }
        if (!isalphanumerical(s[end])) {
            end--;
            continue;
        }
        if (tolower(s[srt]) != tolower(s[end])) {
            return false;
        }
        srt++;
        end--;
    }
    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";

    if (isPalindrome(s))
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";

    return 0;
}
