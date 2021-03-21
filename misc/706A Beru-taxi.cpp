// #author <dwax1324>		#date <2021.03.16 04:03 UTC+09:00>
#include <bits/stdc++.h>
//#define int long long
using namespace std;using pii=pair<int,int>;using tii=tuple<int,int,int>;
#define all(x) (x).begin(), (x).end()


signed main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#endif
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int a,b; cin >> a >> b;
    int n; cin >> n;
    double ans = 1e9;
    for(int i=0; i < n; i++){
    	int x,y,s; cin >> x >> y >> s;
    	double time = sqrt((a-x)*(a-x) + (b-y)*(b-y))/double(s);
    	ans = min(ans,time);
    }
    cout << fixed << setprecision(7) << ans;
}
}
