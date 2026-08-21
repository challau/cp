#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;

    long long p = 1;
    while(p * 10 <= n){
        p = p * 10;
    }

    long long l = n/p;
    long long luck = (l + 1) * p;

    cout<< luck - n << endl;
    return 0;
}