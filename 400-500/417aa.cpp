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
    ll X,K,D; cin>>X>>K>>D;
    X=abs(X);

    ll ans;

    if(X/D>K) ans=X-D*K;
    else{
        ll e=X/D;
        K-=e;
        X-=e*D;
        if(K%2==1) X=abs(X-D);
        ans=X;
    }

    cout<<ans<<endl;

    return 0;
}