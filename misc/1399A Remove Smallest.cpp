// date: Tue Mar 9 03:43:26 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    vector<int>v(n);
    for(int i=0; i < n; i++) cin >> v[i];
    sort(all(v));
    if(v.size()==1) cout << "YES\n";
    else{
        bool ok = true;
        for(int i=0; i < v.size()-1; i++){
            if(v[i+1]-v[i] >1) ok = false;
        }
        cout << (ok ? "YES" : "NO") << '\n'; 
    }

}
}