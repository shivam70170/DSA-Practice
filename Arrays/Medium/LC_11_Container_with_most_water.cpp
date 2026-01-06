#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int n = height.size();
    int lp = 0, rp = n - 1;
    int maxwater = 0;

    while (lp < rp) {
        int width = rp - lp;
        int hgt = min(height[lp], height[rp]);
        int currwater = width * hgt;

        maxwater = max(maxwater, currwater);

        if (height[lp] < height[rp]) {
            lp++;
        } else {
            rp--;
        }
    }
    return maxwater;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout << "Maximum water = " << maxArea(height) << endl;
    return 0;
}
