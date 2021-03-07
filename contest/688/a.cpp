#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pic pair<int, char>
#define pipii pair<int, pii>
#define pll pair<long, long>
#define ror(begin, end, i) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define debug freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define is ==
#define isnot !=
#define pb push_back
#define eb emplace_back
#define F first
#define S second
#define error(args...)                           \
    {                                            \
        string _s = #args;                       \
        replace(_s.begin(), _s.end(), ',', ' '); \
        stringstream _ss(_s);                    \
        istream_iterator<string> _it(_ss);       \
        err(_it, args);                          \
        cout << '\n';                            \
    }
void err(istream_iterator<string> it) {}
template <typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cout << *it << " = " << a << ' ';
    err(++it, args...);
}
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<*/
void preprocess() {
}

void solve() {
    int a, b;
    cin >> a >> b;
    vector<int> va(a), vb(b);
    ror(0, a, i) {
        cin >> va[i];
    }
    ror(0, b, i) {
        cin >> vb[i];
    }
    int cnt = 0;
    ror(0, a, i) {
        if (binary_search(all(vb), va[i])) cnt++;
    }
    cout << cnt << '\n';
}

int main() {
    fastio;
    preprocess();
    //  debug;
    int t = 1;
    cin >> t;
    ror(0, t, i) {
        // cout << "case #" << t << ": ";
        solve();
    }
}
//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//\\//
