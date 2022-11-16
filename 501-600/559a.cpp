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
    string s; cin>>s;
    int s_size=s.size();
    table dp(s_size+1,vector<int>(9));
    rep(i,s_size+1) dp[i][0]=1;
    repp(i,1,8) dp[0][i]=0;
    

    string ch="chokudai";

    repp(i,1,s_size){
        repp(j,1,8){
            if(s[i-1]==ch[j-1]) dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
            //iを進めずにjを進めることはできないのでdp[i][j-1]は用いない
            else dp[i][j]=dp[i-1][j];
            dp[i][j]%=mod;
        }
    }
    cout<<dp[s_size][8]<<endl;
    return 0;
}