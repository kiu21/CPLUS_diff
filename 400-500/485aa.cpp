#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repp(i, s, n) for (int i = (s); i <= (int)(n); ++i)
using ll = long long;
using P = pair<int, int>;
using table = vector<vector<int>>;
const ll mod = 1000000007;
template <typename T>
bool chmax(T &a, const T& b) {if (a < b) {a = b;return true;}return false;}
template <typename T>
bool chmin(T &a, const T& b) {if (a > b) {a = b;return true;}return false;}

int N, K, p[201010];
double e[201010];
//---------------------------------------------------------------------------------------------------
void _main() {
    cin >> N >> K;
    rep(i, 0, N) cin >> p[i];

    rep(i, 0, N) e[i] = 1.0 * (1 + p[i]) / 2;

    double tot = 0;
    rep(i, 0, K) tot += e[i];

    double ans = tot;
    rep(i, K, N) {
        tot = tot + e[i] - e[i - K];
        chmax(ans, tot);
    }
    printf("%.10f\n", ans);
}