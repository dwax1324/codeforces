// #author <dwax1324>		#date <Sat Mar 13 00:00:39 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    int vis[51]={};
    for(int i=0; i < n*2; i++){
        int a; cin >> a;
        if(!vis[a]) {
            cout << a << ' ';
            vis[a]= true;
        }
    }
    cout << '\n';

}
}