// #author <dwax1324>		#date <Mon Mar 15 03:39:35 2021>
#include <bits/stdc++.h>
//#define int long long
using namespace std;using pii=pair<int,int>;using tii=tuple<int,int,int>;
#define all(x) (x).begin(), (x).end()


signed main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n,a,b; cin >> n >> a >> b;
    string s="";
    for(int i=0; i < b; i++){
        s += 'a'+i;
    }
    for(int i=0; i < a-b; i++){
        s += s[s.size()-1];
    }

    for(int i=0,j=0; j<n; i = (i+1)%a,j++){
        cout << s[i];
    }
    cout << '\n';
}
}