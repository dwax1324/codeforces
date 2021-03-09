// date: Tue Mar 9 10:01:36 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    vector<int> arr[3];
    for(int i=0;  i< n ;i++){
        int a; cin >> a;
        arr[a-1].push_back(i);
    }
    int ans =1e9;
    for(int i=0; i < 3; i++) ans = min(ans,(int)arr[i].size());
    cout << ans << '\n';
    for(int i=0; i < ans ; i++){
        for(int j=0; j < 3; j++){
            cout << arr[j][arr[j].size()-i-1]+1 << ' ';
        }
        cout << '\n';
    }

}
}   