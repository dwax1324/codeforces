// #author <dwax1324>		#date <Wed Mar 10 10:14:45 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    if(n/2%2==1){
        cout << "NO\n";
    }else{
        cout << "YES\n";
        int SUM=0;
        for(int i=2,cnt=0;cnt++<n/2; i+=2){
            cout << i << ' ';
            SUM += i;
        }
        int SUM2=0;
        for(int i=1,cnt=0; ++cnt<n/2; i+=2){
            cout << i << ' ';
            SUM2 += i;
        }
        cout << SUM - SUM2 << '\n';
    }

}
}