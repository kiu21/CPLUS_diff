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

int main()
{
    int N,M; cin>>N>>M;
    vector<ll> A(N); rep(i,N) cin>>A[i];
    vector<ll> sum(N+1); sum[0]=A[0];
    repp(i,1,N) sum[i]=sum[i-1]+A[i-1];

    vector<ll> sumi(N-M+1);
    ll now=0;
    rep(i,M) now+=A[i]*(i+1);
    sumi[0]=now;
    repp(i,1,N-M+1) sumi[i]=sumi[i-1]+M*A[M+i-1]-(sum[M+i-1]-sum[i-1]);
    ll ans=-10000000*mod;
    rep(i,N-M+1) ans=max(ans,sumi[i]);
    cout<<ans<<endl;

    return 0;
}