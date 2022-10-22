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
    int N,X;cin>>N>>X;
    vector<int> A(N),B(N);
    rep(i,N) cin>>A[i]>>B[i];

    vector<vector<bool>> dp(N+1,vector<bool>(10101,false));
    dp[0][0]=true;
    rep(i,N){
        rep(j,10000){
            if(dp[i][j]==true){
                dp[i+1][j+A[i]]=true;
                dp[i+1][j+B[i]]=true;
            }
        }
    }
    if(dp[N][X])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}