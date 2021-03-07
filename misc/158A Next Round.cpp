// date: Sun Mar 7 03:08:29 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n,k; cin >> n >> k;
    vector<int> v(n);
    for(int i=0; i < n; i++){
        cin >> v[i];
    }
    int key = v[k-1];
    int ans=0;
    for(auto x : v){
        if(x >= key && x >0) ans++;
    }
    cout << ans;

}
}