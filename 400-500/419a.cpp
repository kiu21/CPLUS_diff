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
    int N,Q; cin>>N>>Q;
    string S; cin>>S;
    ll cnt=0;

    rep(i,Q){
        int t,x; cin>>t>>x;
        if(t==1) cnt+=x;
        else if(x-cnt%N>0) cout<<S[x-cnt%N-1]<<endl;
        else cout<<S[x-cnt%N-1+N]<<endl;
    }
    return 0;
}