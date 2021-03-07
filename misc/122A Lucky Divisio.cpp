// date: Sun Mar 7 10:59:55 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    vector<int> v = {4,7,44,77,47,74,444,777,447,474,477,774,747,744};
    int a; cin >> a;
    bool ok = false;
    for(auto x : v)
        if(a % x ==0) ok = true;
    if(ok)cout << "YES";
    else cout << "NO";
}
}