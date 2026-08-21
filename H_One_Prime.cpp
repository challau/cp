#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    if(n <= 1){
         cout << "NO" << endl;
    }
    bool isprime = true;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            isprime = false;
            break;
        }
    }
    if(isprime){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    solve(n);
    return 0;
}