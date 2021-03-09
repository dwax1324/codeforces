// date: Tue Mar 9 12:15:14 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n,k; cin >> n >> k;
    vector<int>v1(n),v2(n);
    for(auto &x : v1) cin >> x;
    for(auto &x : v2) cin >> x;
    sort(all(v1));
    sort(all(v2),[&](int a, int b){return a> b;});
    for(int i=0; i < k; i++){
        if(v1[i] < v2[i]) swap(v1[i],v2[i]);
    }
    cout << accumulate(all(v1),0) << '\n';

}
}