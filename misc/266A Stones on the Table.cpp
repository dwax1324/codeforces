// date: Sun Mar 7 09:11:43 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    string s; cin >> s;
    int cnt=0;
    int ans=0;
    for(int i=0; i < s.size()-1; i++){
        if(s[i] == s[i+1]){
            cnt++;
        }else{
            ans += cnt;
            cnt=0;
        }
    }
    ans+=cnt;
    cout << ans;

}
}