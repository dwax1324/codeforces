// date: Tue Mar 9 04:23:13 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    vector<int> v1(n),v2(n);
    for(int i=0; i < n; i++) cin >> v1[i];
    for(int i=0; i < n; i++) cin >> v2[i];
    int min1 = *min_element(all(v1));
    int min2 = *min_element(all(v2));
    ll ans =0;
    for(int i=0; i < n; i++){
        if(v1[i] > min1 && v2[i] > min2){
            int diff = min(v1[i]-min1,v2[i]-min2);
            v1[i] -= diff; v2[i] -= diff;
            ans += diff;
        }
        if(v1[i] > min1){
            ans += v1[i]-min1;
        }
        if(v2[i] > min2){
            ans += v2[i]-min2;
        }
    }
    cout << ans << '\n';
    

}
}