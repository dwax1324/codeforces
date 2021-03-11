// #author <dwax1324>		#date <Wed Mar 10 08:24:05 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    vector<int> v(4);
    for(auto &x : v) cin >> x;
    for(auto &x : v){
        if(*max_element(all(v))-x) cout << *max_element(all(v))-x << ' ';
    }

}
}