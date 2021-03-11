// #author <dwax1324>		#date <Wed Mar 10 14:53:30 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    ll n,m; cin >> n >> m;
    ll ans=0,curr=1;
    for(int i=0; i < m; i++){
        ll a; cin >> a;
        ans += (a - curr >= 0 ? a-curr : n+(a-curr));
        curr=a;
    }
    cout << ans;

}
}