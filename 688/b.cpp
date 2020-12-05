#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pic pair<int, char>
#define pipii pair<int, pii>
#define pll pair<long, long>
#define ror(begin, end, i) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define debug freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define is ==
#define isnot !=
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
    ll n;
    cin >> n;
    vector<ll> v;
    ror(0, n, i) {
        ll a;
        cin >> a;
        v.push_back(a);
    }
    ll ans = 0;
    ror(0, n - 1, i) {
        ans += abs(v[i + 1] - v[i]);
    }
    ll dec = max(abs(v[0] - v[1]), abs(v[n - 1] - v[n - 2]));

    ror(1, n - 1, i) {
        dec = max(dec, abs(v[i] - v[i - 1]) + abs(v[i] - v[i + 1]) - abs(v[i - 1] - v[i + 1]));
    }
    cout << ans - dec << '\n';
}

int main() {
    fastio;
    // debug;  // ✨✨✨✨✨✨✨✨✨✨✨✨✨✨
    int t = 1;
    cin >> t;  // ✨✨✨✨✨✨✨✨✨✨✨✨✨✨
    preprocess();
    ror(0, t, i) {
        // cout << "case #" << t << ": ";
        solve();
    }
}