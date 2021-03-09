// date: Tue Mar 9 04:55:43 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int a,b; cin >> a >> b;
    int ans =a;
    int neww = a;
    int used = 0;
    while(1){
        used += neww;
        neww = used/b;
        used = used%b;
        ans += neww;
        if(!neww)break;
    }
    cout << ans;

}
}