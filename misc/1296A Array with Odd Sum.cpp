// #author <dwax1324>		#date <Mon Mar 15 04:31:40 2021>
#include <bits/stdc++.h>
//#define int long long
using namespace std;using pii=pair<int,int>;using tii=tuple<int,int,int>;
#define all(x) (x).begin(), (x).end()


signed main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    int odd=0;
    for(int i=0; i < n; i++){
        int a; cin >> a;
        odd += a%2;
    }
    if(odd%2==1 || (odd && n-odd >= 1)) cout << "YES\n";
    else cout << "NO\n";

}
}