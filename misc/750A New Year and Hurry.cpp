// #author <dwax1324>		#date <Wed Mar 10 05:17:25 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    //1440
    //1200
    // 240
    // 50
    int n,k; cin >> n >> k;
    int timee = 240-k;
    int ans=0;
    // 18
    // 5 10
    for(int i=1;i<=n;i++){
        timee -= 5*i;
        if(timme <0 )break;
        ans++;
    }
    cout << ans;

}
}