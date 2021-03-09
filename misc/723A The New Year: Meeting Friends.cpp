// #author <dwax1324>		#date <Wed Mar 10 03:54:41 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int a,b,c; cin >> a >>  b >> c;
    cout << max({a,b,c})-min({a,b,c});
}
}