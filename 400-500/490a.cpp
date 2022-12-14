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
    ll N; cin>>N;
    int M; cin>>M;
    vector<ll> A(M+2); rep(i,M) cin>>A[i+1];
    A[0]=0;A[M+1]=N+1;
    sort(A.begin(),A.end());

    ll stamp=1010101010;
    repp(i,1,M+1){
        if(A[i]-A[i-1]-1>0) stamp=min(stamp,A[i]-A[i-1]-1);
    }

    int ans=0;
    repp(i,1,M+1){
        if(A[i]-A[i-1]-1>0)
        ans+=((A[i]-A[i-1]-1+stamp-1)/stamp);
    }

    cout<<ans<<endl;
    
    return 0;
}