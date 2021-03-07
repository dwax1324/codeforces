// date: Sun Mar 7 09:30:46 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    string s; cin >> s;
    if(s.size() <7) {cout << "NO"; exit(0);}
    for(int i=0; i <= s.size()-7; i++){
        bool ok = true;
        for(int j=i+1; j < i+1+6; j++){
            if(s[i] != s[j]) ok= false;
        }
        if(ok) {cout << "YES"; exit(0);}
    }
    cout << "NO";

}
}
// 10000000