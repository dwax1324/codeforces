// #author <dwax1324>		#date <Wed Mar 10 10:50:28 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    vector<int>v(n);
    for(auto& x : v) cin >> x;
    int MIN = *min_element(all(v));
    int MAX = *max_element(all(v));
    int idx_min,idx_max;
    for(int i=0; i < v.size(); i++){
        if(v[i] == MAX){
            idx_max = i; break;
        }
    }
    for(int i=v.size()-1; i>=0; i--){
        if(v[i] == MIN){
            idx_min = i; break;
        }
    }

    cout << (idx_max) + (n-1-idx_min) - (idx_max > idx_min);

}
}