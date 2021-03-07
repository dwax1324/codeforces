// date: Sun Mar 7 10:45:39 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    int cap=0, ans = 0;
    for(int i=0; i < n; i++){
        int a,b; cin >> a >> b;
        cap -=a; cap+= b;
        ans = max(cap,ans);
    }
    cout << ans;

}
}