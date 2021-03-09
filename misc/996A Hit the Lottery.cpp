// date: Tue Mar 9 02:46:43 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    
    int cnt=0;
    cnt += n/100; n %= 100;
    cnt += n/20; n %= 20;
    cnt += n/10; n %= 10;
    cnt += n/5; n %= 5;
    cnt += n/1; n %= 1;
    cout << cnt;




}
}