// date: Sun Mar 7 04:40:14 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    string s; cin >> s;
    for(auto &x : s) x= tolower(x);
    char arr[6] = {'a', 'o', 'y', 'e', 'u', 'i',};
    for(auto &x : s){
        bool ok = false;
        for(int i=0; i < 6; i++){
            if(x == arr[i]) ok =true;
        }
        // if not vowels
        if(!ok) cout << '.' << x;
    }

}
}