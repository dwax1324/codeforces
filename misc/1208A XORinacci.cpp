// #author <dwax1324>		#date <2021.03.16 02:12 UTC+09:00>
#include <bits/stdc++.h>
//#define int long long
using namespace std;using pii=pair<int,int>;using tii=tuple<int,int,int>;
#define all(x) (x).begin(), (x).end()


signed main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#endif
cin >> tt;
for(int tc=1;tc<=tt;tc++){

	int n,m,k; cin >> n >> m >> k;
	int M = n^m;
	int ans[3]={n,m,M};
	cout << ans[k%3] << '\n';
}
}
