#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    
    int even = 0, neg = 0, pos = 0, odd = 0;
    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;

        if(ele % 2 == 0) {
            even++;
        }else{
            odd++;
        }

        if(ele < 0){
            neg++;
        }else if(0 < ele){
            pos++;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos <<endl;
    cout << "Negative: " << neg << endl;
    return 0;
}