#include<bits/stdc++.h>
using namespace std;
int main(){
    int x , k, y;
    cin >> x >> k >> y;
    bool isnum = false;
    for(int i = 1; i <= x; i++){
        if(k * i == y){
            isnum = true;
        }
    }
    if(isnum){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}