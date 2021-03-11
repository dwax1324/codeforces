// #author <dwax1324>		#date <Wed Mar 10 16:03:19 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    vector<int>arr[2];
    for(int i=0; i < n; i++){
        int a; cin >> a;
        arr[a%2].push_back(i+1);
    }
    if(arr[0].size()==1) cout << arr[0][0];
    else cout << arr[1][0];

}
}