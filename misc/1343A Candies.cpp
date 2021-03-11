// #author <dwax1324>		#date <Wed Mar 10 12:25:47 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    for(int i=2; i <= 30; i++){
        if(n % ((1<<i)-1) ==0){
            cout << n/((1<<i)-1) << '\n';
            break;
        }
    }

}
}