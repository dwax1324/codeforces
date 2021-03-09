// date: Mon Mar 8 19:03:04 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    string a,b; cin >> a >> b;
    for(int i=0; i < a.size(); i++){
        if(a[i] == b[i]) cout << 0;
        else cout << 1;
    }

}
}