// date: Sun Mar 7 06:32:58 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){
    int ci,cj;
    for(int i=0; i < 5; i++)
        for(int j=0; j < 5; j++){
            int a; cin >> a;
            if(a){
                ci=i;
                cj=j;
            }
        }
    cout << abs(ci-2) +abs(cj-2);
            

}
}