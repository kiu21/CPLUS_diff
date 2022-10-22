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
    vector<int> A(M),B(M);
    rep(i,M) cin>>A[i]>>B[i];
    int K; cin>>K;
    vector<int> C(K),D(K);
    rep(i,K) cin>>C[i]>>D[i];

    int ans=0;
    for(int bit=0; bit<(1<<K); bit++){
        vector<int> choose;
        rep(i,K){
            if(bit & 1<<i) choose.push_back(D[i]);
            else choose.push_back(C[i]);            
        }
        vector<bool> flag(101);
        for(int i:choose){
            flag[i]=true;
        }
        int cnt=0;
        rep(i,M){
            if(flag[A[i]] && flag[B[i]]) cnt++;

        }
        chmax(ans,cnt);
    }

    cout<<ans<<endl;

    return 0;
}