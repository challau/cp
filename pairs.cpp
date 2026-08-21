#include<bits/stdc++.h>
using namespace std;
int main(){
    // pair<int,int> v = {1,2};
    // cout << v.first << " " << v.second <<endl;

    // pair<int, pair <int,int> > v = {1, {2,3} };
    // cout << v.first << " " <<  v.second.first << endl;

    vector<pair<int,int>> p = {{10,2},{20,5},{30,4},{1,3}};
    sort(p.begin(),p.end());
    for(auto ele : p){
        cout << ele.first << " " << ele.second << endl;
    }
    return 0;
}