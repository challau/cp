#include <bits/stdc++.h>
using namespace std;

void solve(long long x) {
    x = abs(x);

    long long sum = 0;
    long long jumps = 0;

    while (sum < x || sum % 2 != x % 2) {
        jumps++;
        sum += jumps;
    }

    cout << jumps << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x;
    cin >> x;

    solve(x);

    return 0;
}