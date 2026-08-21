#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    if(n == 1){
        if(a[0] > 1){
            cout<<"NO"<<endl;
            return;
        }
        else{
            cout<<"YES"<<endl;
            return;
        }
    }

    if(a[n - 1] - a[n - 2] > 1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}