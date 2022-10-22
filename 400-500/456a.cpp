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
    vector<int> S(M),C(M);
    rep(i,M) cin>>S[i]>>C[i],S[i]--;

    rep(ans,1000){
        string s=to_string(ans);
        if(s.length() != N) continue;

        bool ok=true;
        rep(i,M){
            rep(j,N){
                if(j==S[i] && (s[j]-'0') != C[i]) ok=false;
            }
        }
        if(ok){
            cout<<ans<<endl;
            return 0 ;
        }
    }
    cout<<-1<<endl;
    return 0;
}