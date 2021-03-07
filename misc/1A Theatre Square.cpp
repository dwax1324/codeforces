#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    ll n,m,a;
    cin >> n >> m >> a;
    ll col=0,row=0;
    row = m/a + (m%a ? 1 : 0);
    col = n/a + (n%a ? 1 : 0);
    cout << row*col;

}
}