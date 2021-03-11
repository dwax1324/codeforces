// #author <dwax1324>		#date <Wed Mar 10 16:37:36 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){
    int n; cin>> n;
    map<string,int> mp;
    for(int i=0; i < n; i++){
        string s; cin >> s;
        if(mp[s]) {
            cout << s << mp[s] << '\n';
        }else {
            cout << "OK\n";
        }
        mp[s]++;
    }
    

}
}