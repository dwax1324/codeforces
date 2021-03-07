// date: Sun Mar 7 23:49:41 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    string s; cin >> s;

    auto changeCase = [&](char a){
        return (char)(a == toupper(a) ?tolower(a) : toupper(a));
    };
    auto allUpper = [&](int l, int r){
        for(int i=l; i <= r; i++){
            if(s[i] == tolower(s[i])) return false;
        }
        return true;
    };
    if(s.size() == 1){
        cout << changeCase(s[0]);
    }else{

        if(allUpper(0,s.size()-1) || allUpper(1,s.size()-1)){
            for(auto x : s) cout << changeCase(x);
        }else{
            cout << s;
        }

    }

}
}