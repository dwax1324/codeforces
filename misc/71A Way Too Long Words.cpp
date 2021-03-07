#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
cin >> tt;
for(int tc=1;tc<=tt;tc++){

    string s;
    cin >> s;
    if(s.size() > 10){
        cout << s[0] << s.size()-2 << s[s.size()-1] << '\n';
    }else cout << s << '\n';

}
}