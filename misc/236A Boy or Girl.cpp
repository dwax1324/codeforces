// date: Sun Mar 7 09:20:17 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    string s; cin >> s;
    set<char> st;
    for(auto x : s)st.insert(x);
    if(st.size()%2) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";

}
}