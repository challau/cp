#include<bits/stdc++.h>
using namespace std;


void solve(string s){
    s[0] = toupper(s[0]);
    cout << s << endl;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    solve(s);
    return 0;
}