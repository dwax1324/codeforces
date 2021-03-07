// date: Sun Mar 7 20:17:18 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    vector<int> v(n);
    int SUM=0;
    for(int i=0; i < n; i++) {
        cin >> v[i];
        SUM += v[i];
    }
    sort(all(v),[&](int a, int b) {return a > b;});
    int ans=0,temp=0;
    for(auto x : v){
        temp += x;
        ans++;
        if(temp > SUM/2)break;
    }
    cout << ans;

}
}