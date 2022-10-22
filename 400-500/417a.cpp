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

ll X,K,D;

ll f(ll n){
    ll ans=abs(X+D*(2*n-K));
    return ans;
}

int main()
{
    cin>>X>>K>>D;

    ll l=0,r=K;
    while(r-l>1){
        ll n=l+(r-l)/2;
        if(f(l)<=f(r)){
            r=n;
        }else{
            l=n;

        }
    }
    ll ans=min(f(r),f(l));
    cout<<ans<<endl;

    return 0;
}