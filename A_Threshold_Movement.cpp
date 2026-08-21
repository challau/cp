#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> w(n);
    long long max_w = 0;
    set<long long> unique_w;
    
    for (int i = 0; i < n; ++i) {
        cin >> w[i];
        max_w = max(max_w, w[i]);
        unique_w.insert(w[i]);
    }
    
    // For n = 1, it's always impossible
    if (n == 1) {
        cout << "NO\n";
        return;
    }
    
    // Collect candidate values for k
    vector<long long> candidates;
    candidates.push_back(0);
    candidates.push_back(max_w + 1);
    for (long long u : unique_w) {
        if (u - 1 >= 0) {
            candidates.push_back(u - 1);
        }
        candidates.push_back(u + 1);
    }
    
    bool found = false;
    for (long long k : candidates) {
        // Condition: w_i != k for all i
        bool valid = true;
        for (int i = 0; i < n; ++i) {
            if (w[i] == k) {
                valid = false;
                break;
            }
        }
        if (!valid) continue;
        
        // Check position 1 (0-indexed w[1] is position 2)
        if (!(w[1] < k)) continue;
        
        // Check position n (0-indexed w[n-2] is position n-1)
        if (!(w[n-2] > k)) continue;
        
        // Check internal positions from 2 to n-1
        bool ok = true;
        for (int x = 1; x < n - 1; ++x) {
            long long left_val = w[x - 1];
            long long right_val = w[x + 1];
            
            int cond_left = (left_val > k) ? 1 : 0;
            int cond_right = (right_val < k) ? 1 : 0;
            
            if (cond_left + cond_right != 1) {
                ok = false;
                break;
            }
        }
        
        if (ok) {
            found = true;
            break;
        }
    }
    
    if (found) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
