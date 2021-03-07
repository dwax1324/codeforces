// Sat Feb  6 20:33:43 KST 2021
// author: dwax1324
#include <bits/stdc++.h>
using namespace std;
#define F ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define debug freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define o1 first
#define o2 second
#define endl '\n'
typedef pair<int,int> pii;
typedef tuple<int,int,int> tii;

// implementation, since h < 100 && n < 100, worst case : 10000
// but k is 10^9, so need to handle if -1 repeats at the end

void solve(){
    int n,k; cin >> n >> k;
    vector<int> ms(n),ks;
    for(int i=0; i < n; i++){
        cin >> ms[i];
    }
    ms.push_back(-1);
 
    int i =0;
    vector<int> prev;
    while(1){
        bool end = 1;
        for(int j=0; j < n; j++){
            if(ms[j] < ms[j+1]){
                ms[j]++;
                ks.push_back(j+1);
                end = 0;
                break;
            }
        }
        if(end) ks.push_back(-1);
        if(ks.size() >= 2 && ks[sz(ks)-1] == -1 && ks[sz(ks)-2] == -1){
            break;
        }
    }
    if(k > ks.size()) cout << -1 << endl;
    else cout << ks[k-1] << endl;
 
}
 
 
int32_t main(){ F int t=1;
cin >> t;
while(t--) solve();}
