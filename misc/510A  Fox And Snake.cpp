// #author <dwax1324>		#date <Wed Mar 10 04:22:28 2021>
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n,m; cin >> n >> m;
    char arr[51][51]={};
    bool flag = false;
    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){
            if(i%2==0) arr[i][j] = '#';
            if(i%2==1){
                arr[i][j]='.';
                arr[i][flag ? 0 : m-1] = '#';
            }
        }
        if(i%2==1)flag^=1;
    }
    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){
            cout << arr[i][j];
        }
        cout << '\n';
    }

}
}