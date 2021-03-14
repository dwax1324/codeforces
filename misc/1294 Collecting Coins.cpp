// #author <dwax1324>		#date <Sun Mar 14 21:23:18 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
cin >> tt;
for(int tc=1;tc<=tt;tc++){

    vector<int> v(3);
    int n;
    for(auto &x : v) cin>> x;
    cin >> n;
    int diff =0;
    for(auto x :v){
        diff += *max_element(all(v))-x;
    }
    if(n-diff >=0 && (n-diff) %3 ==0) cout << "YES\n";
    else cout << "NO\n";
        


}
}