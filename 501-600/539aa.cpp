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

    vector<bool> used(N,false);
    used[N-1]=true;

    ll ans=0;
    for(int i=N-1; i>=0;i--){//N番目からのびている木として考える
        if(used[i]){
            ans+=T[i];
            rep(j,K[i]){
                used[A[i][j]-1]=true;
            }
        }
    }
    cout<<ans<<endl;


    return 0;
}