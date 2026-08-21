#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    bool is_hard = false;
    for(int i = 0; i < n; i++){
        int el; cin >> el;
        if(el == 1){
            is_hard = true;
        }
    }
    if(is_hard){ cout << "HARD" << endl;}
    else { cout << "EASY" <<endl;}
}
int main(){
    int n;
    cin >> n;
    solve(n);
    return 0;
}