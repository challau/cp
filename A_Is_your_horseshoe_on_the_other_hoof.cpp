#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<long long> s;
    s.insert(s1);
    s.insert(s2);
    s.insert(s3);
    s.insert(s4);
    cout<< 4 - s.size() << endl;
    
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}