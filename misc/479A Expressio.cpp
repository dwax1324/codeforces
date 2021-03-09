// date: Mon Mar 8 17:35:43 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    // {+,+},{+,*},{*,+},{*,*} + {no reverse, reverse }
    vector<int> v(3);
    for(int i=0; i < 3; i++) cin >> v[i];

    char arr[4][2] = {{'+','+'},{'+','*'},{'*','+'},{'*','*'}};
    auto cal = [&](){
        int MAX=0;
        for(int j=0 ; j<4; j++){
            int curr = v[0];
            for(int i=0; i< 2; i++){
                if(arr[j][i] == '+')  curr += v[i+1];
                else curr *= v[i+1];
            }
            MAX = max(MAX,curr);
        }
        return MAX;
    };
    int a= cal();
    reverse(all(v));
    int b =cal();
    cout << max(a,b);


}
}