#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repp(i, s, n) for (int i = (s); i <= (int)(n); ++i)
using ll = long long;
using P = pair<int, int>;
using table = vector<vector<int>>;
const ll mod = 998244353;
template <typename T>
bool chmax(T &a, const T& b) {if (a < b) {a = b;return true;}return false;}
template <typename T>
bool chmin(T &a, const T& b) {if (a > b) {a = b;return true;}return false;}


int main()
{
    int N; cin>>N;
    vector<vector<ll>> dp(9,vector<ll>(N+2));
    rep(i,9) dp[i][0]=1;
    repp(j,1,N){
        repp(i,0,8){
                dp[i][j]+=dp[i][j-1];
            if(i==0){
                dp[i][j]+=dp[i+1][j-1];
            }else if(i==8){
                dp[i][j]+=dp[i-1][j-1];    
            }else{
                dp[i][j]+=dp[i+1][j-1];
                dp[i][j]+=dp[i-1][j-1];
            }
            dp[i][j]%=mod;
        }
    }
    ll ans=0;
    rep(i,9){
        ans+=dp[i][N-1];
        ans%=mod;        
    }
    cout<<ans<<endl;
}