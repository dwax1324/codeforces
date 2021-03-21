// #author <dwax1324>		#date <Mon Mar 15 15:50:51 2021>
#include <bits/stdc++.h>
//#define int long long
using namespace std;using pii=pair<int,int>;using tii=tuple<int,int,int>;
#define all(x) (x).begin(), (x).end()


signed main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int a; cin >> a;
    int i;
    int t=0;
    int SUM =0;
    int ans=0;
    for(i=1; i<= 1000; i++){
        t += i;
        ans++;
        SUM += t;
        cout << SUM << ' ';
        if(SUM > a) break;
    }
    cout << ans-1;


}
}