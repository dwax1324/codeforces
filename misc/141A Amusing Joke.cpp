// date: Tue Mar 9 02:40:19 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    string a,b,c; cin >> a >> b >> c;
    int arr[30]={};
    for(auto x : a)
        arr[x-'A']++;
    for(auto x : b)
        arr[x-'A']++;
    
    int arr2[30]={};
    for(auto x : c){
        arr2[x-'A']++;
    }
    bool ok = true;
    for(int i=0; i < 26; i++){
        if(arr[i]!=arr2[i]) ok = false;
    }
    cout << (ok ?"YES":"NO");

}
}