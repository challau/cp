#include<bits/stdc++.h>
using namespace std;



void solve(int n){
    vector<int> s(n);

    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    int left = 0;
    int right = n - 1;
    int a = 0;
    int b = 0;
    int alice = 0;
    int bob = 0;

    while(left <= right){
        if(alice <=  bob){
            alice += s[left];
            a++;
            left++;
        }else {
            bob += s[right];
            b++;
            right--;
        }
    }

    cout << a << " " << b << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    solve(n);
    return 0;
}