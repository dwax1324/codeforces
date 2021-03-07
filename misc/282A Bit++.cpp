// date: Sun Mar 7 04:48:50 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    int ans=0;
    for(int i=0; i < n; i++){
        string s; cin >> s;
        if(s[0] == '+' || s[s.size()-1]== '+') ans++;
        else ans--;
    }
    cout << ans;

}
}