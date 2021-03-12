// #author <dwax1324>		#date <Sat Mar 13 00:26:05 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;

    int cnt[4]={};
    bool ok = true;
    while(n!=1){
        if(n%2==0) {n/=2; cnt[2]++;}
        else if(n%3==0) {n/=3; cnt[3]++;}
        else {ok = false; break;}
    }
    if(!ok || cnt[2] > cnt[3] ) {cout << -1 << '\n';}
    else {
        cout << cnt[3] + (cnt[3]-cnt[2]) << '\n';
    }


}
}