// date: Sun Mar 7 08:52:33 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    string s; cin >> s;
    vector<int> v;
    for(auto x : s){
        if(x != '+') v.push_back(x-'0');
    }
    sort(all(v));
    for(int i=0; i < v.size(); i++){
        cout << v[i];
        if(i!=v.size()-1) cout << '+';
    }

}
}