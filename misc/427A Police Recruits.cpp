// #author <dwax1324>		#date <Wed Mar 10 09:41:42 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    int curr=0;
    int ans =0;
    for(int i=0; i < n; i++){
        int a; cin >> a;
        if(a == -1){
            if( curr == 0) ans++;
            else curr--;
        }else curr += a;
    }
    cout << ans;

}
}