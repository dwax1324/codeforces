// date: Sun Mar 7 20:33:30 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    for(int i=n+1; ;i++){
        set<int>st;
        int ti=i;
        while(ti){
            st.insert(ti%10);
            ti/=10;
        }
        if(st.size() ==4){
            cout << i; break;
        }
    }

}
}