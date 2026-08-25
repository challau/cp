#include<bits/stdc++.h>
using namespace std;

bool distinct(int n){
    string s = to_string(n);

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < s.size(); j++){
            if(s[i] == s[j]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;

    n++;

    while(!distinct(n)){
        n++;
    }

    cout<< n << endl;
    return 0;
}