// #author <dwax1324>		#date <Thu Mar 11 15:08:32 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    ll SUM1=0,SUM2=0;
    for(int i=1; i <= n; i++){
        if(i == n || i <= n/2-1) SUM1 += 1<<i;
        else SUM2 += 1<<i;
    }
    cout << SUM1 - SUM2 << '\n';

}
}