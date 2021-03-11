// #author <dwax1324>		#date <Wed Mar 10 14:41:47 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n,s; cin >> s >> n;
    vector<pii> v(n);
    for(int i=0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(all(v),[&](pii a, pii b){
        return a.first< b.first;
    });
    bool ok=true;
    for(auto x : v){
        if(s > x.first){
            s += x.second;
        }else ok = false;
    }
    cout << (ok ? "YES" :"NO");


}
}