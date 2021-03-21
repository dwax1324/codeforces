// #author <dwax1324>		#date <Mon Mar 15 05:47:57 2021>
#include <bits/stdc++.h>
//#define int long long
using namespace std;using pii=pair<int,int>;using tii=tuple<int,int,int>;
#define all(x) (x).begin(), (x).end()


signed main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    vector<int>v(n);
    for(auto &x:v) cin >> x;

    int cnt=1;
    int ans=1;
    for(int i=0; i < n-1; i++){
        if(v[i+1] > v[i]) cnt++;
        else cnt=1;
        ans= max(ans,cnt);
    }
    cout << ans;
}
}