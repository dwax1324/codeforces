// date: Tue Mar 9 02:18:35 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

map<string,int> mp={
    {"Tetrahedron",4},
    {"Cube",6},
    {"Octahedron",8},
    {"Dodecahedron",12},
    {"Icosahedron",20},
};
    int SUM=0;
    int n; cin >> n;
    for(int i=0; i < n; i++){
        string s; cin >> s;
        SUM += mp[s];
    }
    cout << SUM;

}
}