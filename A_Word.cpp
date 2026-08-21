#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int cnt_l = 0, cnt_u = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == tolower(s[i])){
            cnt_l++;
        }else{
            cnt_u++;
        }
    }
    if(cnt_u <= cnt_l){
        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }
    }else{
        for(int i = 0; i < s.size(); i++){
            s[i] = toupper(s[i]);
        }
    }

    cout<< s << endl;
}
    