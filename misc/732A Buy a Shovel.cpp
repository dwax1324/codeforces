// #author <dwax1324>		#date <Wed Mar 10 08:38:21 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int a,b; cin >> a >> b;
    int i;
    for(i=1;(a*i)%10!=b && (a*i)%10!=0;i++);
    cout << i;

}
}