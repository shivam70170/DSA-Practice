// Problem: Peak index in Mountain array
// Platform: LeetCode
// Question No: 852
// Difficulty: Medium
// Topic: Arrays / Binary Seach

#include <bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int srt = 1, end = arr.size() - 2;

    while (srt <= end) {
        int mid = srt + (end - srt) / 2;

        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
            return mid;
        }
        else if (arr[mid - 1] < arr[mid]) {
            srt = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {0, 2, 4, 6, 5, 3, 1};

    int peakIndex = peakIndexInMountainArray(arr);
    cout << "Peak Index = " << peakIndex << endl;

    return 0;
}
