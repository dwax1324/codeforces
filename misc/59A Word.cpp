// date: Sun Mar 7 11:24:08 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    string s; cin >> s;
    int A=0,a=0;
    for(auto x : s){
        if(x == toupper(x)) A++;
        if(x == tolower(x)) a++;
    }
    if(a>= A){
        for(auto x : s) cout << (char)tolower(x);
    }else{
        for(auto x : s) cout << toupper(x);
    }

}
}