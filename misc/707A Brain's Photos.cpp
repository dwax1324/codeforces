// #author <dwax1324>		#date <Mon Mar 15 15:46:54 2021>
#include <bits/stdc++.h>
//#define int long long
using namespace std;using pii=pair<int,int>;using tii=tuple<int,int,int>;
#define all(x) (x).begin(), (x).end()


signed main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n,m; cin >> n >> m;
    bool color = false;
    for(int i=0; i < n; i++)
        for(int j=0; j <m ;j++){
            char a; cin >> a;
            if(a == 'C' || a == 'M' || a == 'Y') color=true;
        }

    cout << (color ? "#Color" : "#Black&White");

}
}