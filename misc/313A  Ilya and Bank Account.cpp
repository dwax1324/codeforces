// author: dwax1324     date:Tue Mar 9 12:24:48 2021
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    if(n >= 0) cout << n;
    else{
        int a = n / 10;
        int b = n / 100 * 10 + n % 10;
        cout << max(a,b);

    }

}
}