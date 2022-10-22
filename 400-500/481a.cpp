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
    ll H,W; cin>>H>>W;
    int N; cin>>N;
    vector<ll> A(N),B(N);
    rep(i,N) cin>>A[i]>>B[i];

    vector<ll> A_copy(N),B_copy(B);
    A_copy=A,B_copy=B;
    sort(A_copy.begin(),A_copy.end());
    sort(B_copy.begin(),B_copy.end());

    A_copy.erase(unique(A_copy.begin(),A_copy.end()),A_copy.end());
    B_copy.erase(unique(B_copy.begin(),B_copy.end()),B_copy.end());

    vector<ll> A_ans(N),B_ans(N);
    rep(i,N){
        A_ans[i]=lower_bound(A_copy.begin(),A_copy.end(),A[i])-A_copy.begin()+1;
        B_ans[i]=lower_bound(B_copy.begin(),B_copy.end(),B[i])-B_copy.begin()+1;
    }

    rep(i,N){
        cout<<A_ans[i]<<" "<<B_ans[i]<<endl;
    }

    return 0;
}