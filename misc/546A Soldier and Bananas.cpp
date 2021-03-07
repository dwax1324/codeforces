// date: Sun Mar 7 10:03:28 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int k,n,w; cin >> k >> n >> w;
    ll SUM = (w+1)*w/2;
    ll borrow = n-SUM*k;
    if(borrow >=0) cout << 0;
    else cout << -borrow;

}
}