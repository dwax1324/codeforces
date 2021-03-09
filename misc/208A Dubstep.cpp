// date: Mon Mar 8 21:11:48 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    string s; cin >> s;
    bool flag = true;
    for(int i=0 ; i < s.size(); i++){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i+=2;
            if(!flag) cout << ' ';
        }else{
            flag = false;
            cout << s[i];
        }
    }

}
}