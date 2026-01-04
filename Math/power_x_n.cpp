#include <bits/stdc++.h>
using namespace std;

double myPow(double x, int n) {
    if (n == 0) return 1.0;
    if (x == 0) return 0.0;
    if (x == 1) return 1.0;
    if (x == -1 && n % 2 == 0) return 1.0;
    if (x == -1 && n % 2 != 0) return -1.0;

    long long binform = n;
    double ans = 1;

    if (binform < 0) {
        x = 1 / x;
        binform = -binform;
    }

    while (binform > 0) {
        if (binform % 2 == 1) {
            ans *= x;
        }
        x *= x;
        binform /= 2;
    }
    return ans;
}

int main() {
    double x;
    int n;
    cin >> x >> n;

    cout << myPow(x, n);
    return 0;
};
