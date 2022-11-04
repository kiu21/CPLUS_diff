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
    vector<int> T(N),K(N);
    table A(N);
    rep(i,N){
        cin>>T[i]>>K[i];
        rep(j,K[i]){
            int a;cin>>a;
            A[i].push_back(a);
        }
    }

    ll ans=T[N-1];
    for(auto i:A[N-1]){//これではNに技2,4が必要な時、技2に技1が必要な時1を習得する時間がAnsにはいらない
        ans+=T[i-1];
    }
    cout<<ans<<endl;
    return 0;
}