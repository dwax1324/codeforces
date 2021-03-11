// #author <dwax1324>		#date <Wed Mar 10 17:46:45 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n,m,a,b;
    cin >> n >> m >> a >> b;
    if(a * m <= b){
        cout << a*n;
    }else{
        cout << n/m*b + min(n%m*a, b);
    }

}
}