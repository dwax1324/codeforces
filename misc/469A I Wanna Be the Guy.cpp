// date: Mon Mar 8 21:48:54 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    int arr[101]={};
    for(int j=0; j < 2 ;j++){
        int q; cin >> q;
        for(int i=0; i < q; i++){
            int a; cin >> a;
            arr[a]=1;
        }
    }

    bool guy = true;
    for(int i=1; i<= n; i++){
        if(arr[i] == 0) guy = false;
    }
    cout << (guy ? "I become the guy." : "Oh, my keyboard!");


}
}