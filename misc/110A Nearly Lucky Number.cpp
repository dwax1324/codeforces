// date: Sun Mar 7 18:17:30 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    string s; cin >> s;
    int cnt=0;
    for(auto x : s){
        if(x == '4' || x =='7') cnt++;
    }

    auto lucky = [&](int a){
        if(a==0) return false;
        while(a){
            if(a%10 != 4 && a%10!= 7) return false;
            a/=10;
        }
        return true;
    };

    if(lucky(cnt))cout <<"YES";
    else cout << "NO";

}
}