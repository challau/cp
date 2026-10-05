#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a1(n);
        for(int i = 0; i < n; i++){
            cin >> a1[i];
        }
        vector<int> a2;
        for(int i = 0; i < n; i++){
            int max_f = abs(a1[i] - 2);
            a2.push_back(max_f);
        }
        cout<<a2.size()<<endl;
    }
    
}