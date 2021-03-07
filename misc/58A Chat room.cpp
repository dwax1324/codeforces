// date: Sun Mar 7 10:52:56 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    string s; cin >> s;
    string h = "hello";
    int idx =0;
    for(auto x: s){
        if(x == h[idx]){
            idx++;
            if(idx ==5) {idx = -(1<<30);break;}
        }
    }
    if(idx <0) cout << "YES";
    else cout << "NO";

}
}