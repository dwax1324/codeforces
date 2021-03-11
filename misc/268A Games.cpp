// #author <dwax1324>		#date <Wed Mar 10 12:01:22 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    vector<int> v;
    int arr[101]={};
    for(int i=0; i < n; i++){
        int a,b; cin >> a >> b;
        arr[b]++;
        v.push_back(a);
    }
    int ans=0;
    for(auto x : v){
        ans += arr[x];
    }
    cout << ans;

}
}