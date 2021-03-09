// date: Tue Mar 9 10:14:13 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int a,b; cin >> a >> b;
    int spare =0;
    int i;
    for(i=1;a;i++){
        a--;
        if(i%b==0) a++;
    }
    cout << i-1;

}
}