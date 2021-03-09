// date: Tue Mar 9 02:25:08 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int a; cin >> a;
    if( a%2==0){
        cout << a/2-1 << '\n';
    }else cout << a/2 << '\n';

}
}