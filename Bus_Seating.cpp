#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int cnt = 0;
        for(int i = 1; i < 2 * n; i++){
            cnt++;
        }
        cout<<abs(cnt - 1)<<endl;
    }
    return 0;
}