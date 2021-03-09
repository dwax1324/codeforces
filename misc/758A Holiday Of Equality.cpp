// #author dwax1324		#date Tue Mar 9 12:53:13 2021
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    ll n; cin >> n;
    vector<ll>v(n);
    for(auto &x : v) cin >> x;
    ll MAX = *max_element(all(v));
    ll ans=0;
    for(auto &x : v) ans += abs(x-MAX);
    cout << ans;
}
}