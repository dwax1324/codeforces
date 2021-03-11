// #author <dwax1324>		#date <Wed Mar 10 05:43:04 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    auto isPrime=[&](int a){

        for(int i=2; i*i<=a; i++){
            if(a%i==0) return false;
        }
        return true;
    };
    // cout << isPrime(17);
    int a; cin >> a;
    if(!isPrime(a -8)) cout << 8 << ' ' << a-8;
    else cout << 9 << ' ' << a-9;

}
}