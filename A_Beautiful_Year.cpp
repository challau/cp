#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;

    if(n < 2013){
        cout<< 2013 << endl;
    }else{
        cout<< n + 1 << endl;
    }
    return 0;
}