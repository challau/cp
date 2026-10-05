#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n , k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans = 0;
        for(int i = 0; i < n; i += k){
            bool zero = false;
            for(int j = 0; j < k; j++){
                if(s[i+j] == '0'){
                    zero = true;
                    break;
                }
            }
            if(!zero){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}


