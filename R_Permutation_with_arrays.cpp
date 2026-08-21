#include<bits/stdc++.h>
using namespace std;


void solve(int n){
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int j = 0; j < n; j++){
        cin >> b[j];
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    bool isper = true;
    
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            isper = false;
            break;
        }
    }

    if(isper) {
        cout<<"yes"<<endl;
    }
    else {
        cout<<"no"<<endl;
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