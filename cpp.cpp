#include<bits/stdc++.h>
using namespace std;

typedef double long dl;
typedef vector<long long> vll;
typedef pair<long long, long long> pll;
int mod = 1000000007;

#define int long long
#define pb push_back
#define mp make_pair
#define sz(x) (int)((x).size())
#define endl '\n'
#define all(x) x.begin(), x.end()
#define rep(i,a, n) for(int i=a; i<(n); i++)
template<typename T> void _print(T x) { cout << x << "]" << endl; }
void _print(vll &ans) {for (auto i : ans) cout << i << " "; cout << endl;}
#ifndef ONLINE_JUDGE
#define dbg(x...) cout << "[" << #x << "] = ["; _print(x);
#else
#define dbg(x...)
#endif

const int N = 2002;
int a[N][N], s[N];

void solve() {
    int n; cin >> n;
    rep(i, 0, n) cin >> a[0][i];
    rep(i, 0, n) {
        rep(j, 0, n + 1) s[j] = 0;
        rep(j, 0, n) s[a[i][j]]++;
        rep(j, 0, n) {
            a[i + 1][j] = s[a[i][j]];
        }
    }
    int q; cin >> q;
    while (q--) {
        int x, k; cin >> x >> k;
        cout << a[min(n, k)][x - 1] << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t = 1;
    cin >> t;

    while (t--) solve();
    return 0;
}

/*    random multi-line comment in one line  */