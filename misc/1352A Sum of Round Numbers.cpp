// #author <dwax1324>		#date <Wed Mar 10 04:45:47 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    int t=1;
    set<int> ans;
    while(n){
        if(n%10*t) ans.insert(n%10*t);
        n/=10;
        t*=10;
    }
    cout << ans.size() << '\n'; 
    for(auto x : ans)
        cout << x << ' ';
    cout << '\n';
}
}