// #author <dwax1324>		#date <Wed Mar 10 16:20:37 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n,m;cin >> n >> m;
    vector<int> v(n);
    for(int i=0; i < n; i++){
        cin >> v[i];
    }
    sort(all(v));
    int diff=0;
    for(int i=0; i < v.size()-1; i++){
        diff = max(diff,v[i+1]-v[i]);
    }
    cout << max({double(diff)/2.0, v[0]/1.0,m-v[v.size()-1]/1.0});

}
}