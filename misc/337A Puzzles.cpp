// date: Mon Mar 8 20:24:33 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n,m; cin >> n >> m;
    vector<int>v(m);
    for(int i=0; i < m; i++){
        cin >> v[i];
    }
    sort(all(v));
    int ans =1e9;
    for(int i=0; i+n-1 < v.size(); i++){
        ans = min(ans,v[i+n-1]-v[i]); 
    }
    cout << ans;

}
}