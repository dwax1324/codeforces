// date: Tue Mar 9 01:27:24 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    string s;
    getline(cin,s);
    int arr[200]={};
    for(auto x : s){
        if(x <= 122 && x >= 97){
            arr[x]++;
        }
    }
    int cnt=0;
    for(int i=97; i <= 122; i++){
        if(arr[i])cnt++;
    }
    cout << cnt;

}
}