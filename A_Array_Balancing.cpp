#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        for (int i = 0; i < n - 1; i++) {
            ll normal =
                abs(a[i] - a[i + 1]) +
                abs(b[i] - b[i + 1]);

            ll swapped =
                abs(a[i] - b[i + 1]) +
                abs(b[i] - a[i + 1]);

            if (swapped < normal) {
                swap(a[i + 1], b[i + 1]);
            }
        }

        ll ans = 0;

        for (int i = 0; i < n - 1; i++) {
            ans += abs(a[i] - a[i + 1]);
            ans += abs(b[i] - b[i + 1]);
        }

        cout << ans << '\n';
    }

    return 0;
}