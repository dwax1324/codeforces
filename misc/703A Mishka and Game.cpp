// date: Tue Mar 9 09:23:15 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    int A=0,B=0;
    for(int i=0; i < n; i++){
        int a,b;
        cin >> a >> b;
        A += a>b;
        B += a<b;
    }
    if(A > B) cout << "Mishka";
    else if (A < B) cout << "Chris";
    else cout << "Friendship is magic!^^";

}
}