// date: Tue Mar 9 11:52:47 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int x,y,n; cin >> x >> y >> n;
    int ans = n - (n % x)+y;
    if(ans > n) ans -=x;
    cout << ans << '\n';

}
}