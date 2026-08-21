#include<bits/stdc++.h>
using namespace std;


void solve(int n ){
    map < string, int > mp;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(mp.find(s) != mp.end()){
            cout<< s << mp[s] << endl;
            mp[s]++;
        }else{
            mp[s] = 1;
            cout<<"OK"<<endl;

        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    solve(n);
    return 0;
}