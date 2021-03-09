// date: Mon Mar 8 22:08:22 2021
// author: dwax1324
#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;typedef pair<int,int> pii;typedef tuple<int,int,int> tii; typedef long long ll;


int main(){ios_base::sync_with_stdio(0);cin.tie(0);int tt = 1;
//cin >> tt;
for(int tc=1;tc<=tt;tc++){

    int arr[5];
    for(int i=0; i < 4; i++) cin >> arr[i];
    int d; cin >> d;
    bool numbers[100001]={};
    for(int i=0; i < 4; i++){
        for(int j=arr[i]; j <= d; j+= arr[i]){
            numbers[j] = 1;
        }
    }
    int ans=0;
    for(int i=1; i <= d; i++){
        if(numbers[i]) ans++;
    }
    cout << ans;


}
}