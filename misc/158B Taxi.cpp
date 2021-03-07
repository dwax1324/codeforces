// date: Sun Mar 7 22:32:24 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    int cnt[5]={};
    for(int i=0; i < n; i++){
        int a; cin >> a;
        cnt[a]++;
    }
    int ans = cnt[4]+cnt[3]+(cnt[2]+1)/2;
    cnt[1] -= cnt[3];
    if(cnt[2]%2==1) cnt[1]-=2;
    if(cnt[1]>=1){
        ans += (cnt[1]+3)/4;
    }
    cout << ans;

}
}