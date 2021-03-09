// date: Tue Mar 9 11:33:56 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int a,b; cin >> a >> b;
    int L = min(a,b)*2;
    int M = max(a,b);
    cout << max(L*L,M*M) << '\n';

}
}