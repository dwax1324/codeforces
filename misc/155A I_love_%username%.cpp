// #author <dwax1324>		#date <Wed Mar 10 06:21:36 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i < n; i++){
        cin >> v[i];
    }
    int best=-(1e9),worst=1e9;
    int ans=0;
    for(int i=0; i < n; i++){
        if(v[i] > best || v[i] < worst){
            ans++;
            best = max(best,v[i]);
            worst = min(worst,v[i]);
        }
    }
    cout << ans;

}
}