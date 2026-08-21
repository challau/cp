#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x;
    cin >> x;

    bool last = true;

    while (x >= 10) {
        int digit = x % 10;

        if (last) {
            last = false;
            if (digit > 8) {
                cout << "NO\n";
                return;
            }
        } else {
            if (digit == 0) {
                cout << "NO\n";
                return;
            }
        }

        x /= 10;
    }

    if (x == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    int t;
    cin >> t;

    while (t--)
        solve();

    return 0;
}