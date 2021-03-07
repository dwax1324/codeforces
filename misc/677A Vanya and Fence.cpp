// date: Sun Mar 7 21:39:29 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n,k; cin >> n >> k;
    int ans =0;
    for(int i=0; i < n; i++){
        int a; cin >> a; 
        if(a > k)ans+=2;
        else ans++;
    }
    cout << ans;

}
}