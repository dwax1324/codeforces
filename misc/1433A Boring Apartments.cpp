// #author <dwax1324>		#date <Sat Mar 13 00:46:53 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
cin >> tt;
int press[5] = {0,1,3,6,10};
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    cout << (n%10 -1) *10 + press[to_string(n).size()] << '\n';
    

}
}