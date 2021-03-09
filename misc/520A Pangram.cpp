// date: Tue Mar 9 02:14:23 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int n; cin >> n;
    string s; cin >> s;
    int arr[30]={};
    for(auto x : s) arr[tolower(x)-'a']=1;
    bool ok =  true;
    for(int i=0; i < 26; i++){
        if(arr[i] == 0) ok =  false;
    }
    cout << (ok ?"YES":"NO");


}
}