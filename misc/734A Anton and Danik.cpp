// date: Sun Mar 7 20:27:20 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n; string s;
    cin >> s;
    int a=0,d=0;
    for(auto x : s){
        if(x == 'A') a++;
        else d++;
    }
    if(a==d) cout << "Friendship";
    else if( a > d) cout << "Anton";
    else cout << "Danik";

}
}