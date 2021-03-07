// date: Sun Mar 7 22:58:40 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    int prev;
    int cnt=1;
    int ans=0;
    for(int i=0; i < n; i++){
        int a; cin >> a;
        if(i==0) prev=a;
        else{
            if(prev <= a) cnt++;
            else {
                ans = max(ans,cnt);
                cnt=1;
            }
        }
        prev=a;
    }
    ans = max(ans,cnt);
    cout << ans;

}
}