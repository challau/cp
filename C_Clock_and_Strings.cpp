#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    string s = "";
    for (int i = 1; i <= 12; i++) {
        if (i == a || i == b) s += "a";
        if (i == c || i == d) s += "b";
    }
    
    cout << (s == "abab" || s == "baba" ? "YES" : "NO") << "\n";
}

int main() {
    int t; cin >> t;
    while (t--) solve();
}



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        bool hasSymTile = false;
        for (int i = 0; i < n; i++) {
            int a, b, c, d;
            cin >> a >> b >> c >> d;
            if (b == c) hasSymTile = true;
        }

        if (m % 2 == 0 && hasSymTile)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}