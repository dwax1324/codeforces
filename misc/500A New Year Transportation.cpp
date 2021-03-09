// #author <dwax1324>		#date <Wed Mar 10 03:13:24 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n,t; cin >> n >> t;t--;
    vector<int>v(n-1);
    for(int i=0; i < n-1; i++)cin >> v[i];
    v.push_back(1);

    for(int i=0; i < v.size(); i=i+v[i]){
        cout << i;
        if(i==t){cout << "YES";exit(0);}
    }
    cout << "NO";

}
}