// date: Sun Mar 7 18:08:02 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n,t; cin >> n >> t;
    string s; cin >> s;

    for(int j=0; j < t; j++){
        string ts = s;
        for(int i=0; i < s.size()-1; i++){
            if(s[i] == 'B' && s[i+1] == 'G') swap(ts[i],ts[i+1]);
        }
        s = ts;
    }
    cout << s;

}
}