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
    int N; cin>>N;
    vector<int> A(N);rep(i,N) cin>>A[i];
    ll ans=0;
    sort(A.begin(),A.end());

    rep(i,N){
        ans+=(ll)A[i]*i
        ans-=(ll)A[i]*(N-1-i);
    }

    cout<<ans<<endl;

    return 0;
}