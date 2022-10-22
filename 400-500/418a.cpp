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
    float t;cin>>t;
    ll N; cin>>N;
    ll A=ceil(100.0/t);
    ll ans=0;

    if(100%t==0 && t!=1) ans=A*N;
    else{
        ll cnt=(N-1)/t;
        ans=A*N+cnt;
    }
    cout<<ans<<endl;

    return 0;
}