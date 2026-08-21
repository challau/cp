#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (n == 1) {
        cout << 0;
    }
    else if (n == 2) {
        cout << 1;
    }
    else {
        long long a = 0, b = 1;
        for (int i = 3; i <= n; i++) {
            long long next = a + b;
            a = b;
            b = next;
        }
        cout << b;
    }

    return 0;
}
