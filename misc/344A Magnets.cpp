// date: Sun Mar 7 22:42:04 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    int a;
    int cnt=0;
    for(int i=0; i < n; i++){
        int p; cin >> p;
        if(i==0) a=p;
        else if(a!=p) cnt++;
        a=p;
    }
    cout << cnt+1;

}
}