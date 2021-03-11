// #author <dwax1324>		#date <Wed Mar 10 17:10:26 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    vector<ll> primes;
    auto seive =[&](){
        bool vis[1000001]={};
        for(ll i=2; i< 1000001; i++){
            if(vis[i]) continue;
            primes.push_back(i*i);
            vis[i] = true;
            for(int j=i*2; j< 1000001; j+=i){
                vis[j] = true;
            }
        }

    };  

    seive();

    for(int i=0; i < n; i++){
        ll a; cin >> a;
        if(binary_search(all(primes),a)) cout << "YES\n";
        else cout << "NO\n";
    }

}
}