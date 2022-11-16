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
    ll N,A,B,P,Q,R,S; cin>>N>>A>>B>>P>>Q>>R>>S;
    
    vector<string> ans(Q-P+1);

    rep(i,Q-P+1)rep(j,S-R+1) ans[i].push_back('.');

    rep(i,Q-P+1){
        rep(j,S-R+1){
            if(i-j==A-B+R-P) ans[i][j]='#';
            if(i+j==A+B-R-P) ans[i][j]='#';
        }
    }

    rep(i,Q-P+1){
        rep(j,S-R+1){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    


    return 0;
}