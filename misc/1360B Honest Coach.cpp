// date: Tue Mar 9 09:09:24 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    vector<int>v(n);
    for(int i=0; i < n; i++){
        cin >> v[i];
    }
    int ans=1e9;
    for(int i=0; i < n-1; i++){
        ans = min(ans,v[i+1]-v[i]);
    }
    cout << ans << '\n';

}
}