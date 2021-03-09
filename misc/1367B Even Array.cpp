// date: Tue Mar 9 09:37:03 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i < n; i++){
        cin >> v[i];
    }
    int odd=0,even=0;
    for(auto x : v){
        x%2 ? odd++ : even++;
    }
    bool ok = true;
    if(n %2 == 0 && even!=odd) ok = false;
    if(n %2 == 1 && even-odd != 1) ok = false;
    int cnt=0;
    for(int i=0; i < n; i+=2){
        if(v[i]%2==1) cnt++;
    }
    cout << (!ok ? -1 : cnt) << '\n';

}
}