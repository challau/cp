#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cout<<i<<endl;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

