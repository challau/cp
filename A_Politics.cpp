#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    string me, person;
    cin >> me;
    int ans = 1;
    for (int i = 1; i < n; i++){
        cin >> person;
        if(person == me){
            ans++;
        }
    }
    cout<< ans <<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}


