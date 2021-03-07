// Sat Feb  6 20:23:11 KST 2021
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
// #define int int64_t
 
// since u can delete any direction
// just need to think about the minimal request
 
int32_t main(){ F
int T; cin >> T; while(T--){
    int x,y; cin >> x >> y;
    string s; cin >> s;
    // int X=0,Y=0;
    int cnt[28]={0};
    for(auto S : s){
        cnt[S-'A']++;
    }
 
    bool ans =0;
    if( x >= 0 && y >= 0){
        if(cnt['R'-'A'] >= x && cnt['U'-'A'] >= y) ans=1;
    }else if(x >= 0 && y <= 0){
        if(cnt['R'-'A'] >= x && cnt['D'-'A'] >= abs(y)) ans=1;
    }else if(x <= 0 && y >= 0){
        if(cnt['L'-'A'] >= abs(x) && cnt['U'-'A'] >= y) ans=1;
    }else if(x <= 0 && y <= 0){
        if(cnt['L'-'A'] >= abs(x) && cnt['D'-'A'] >= abs(y)) ans=1;
    }
 
    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}
}
