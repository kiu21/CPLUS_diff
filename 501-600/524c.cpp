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

int N,M;
vector<int> A;

int f(int first){
    int ans=0;
    rep(i,M) ans+=(i+1)*A[i+first+1];
    return ans;
}

int main()
{
    cin>>N>>M;
    rep(i,N){
    int a; cin>>a;
    A.push_back(a);
    }

    int l=-1,r=N-M;
    ll ans=0;
    while(l<r){
        int c=l+(r-l)/2;
        if(f(c)>ans){
            ans=f(c);
            l=c;
        }
        else r=c;
    }


    cout<<ans<<endl;
    return 0;
}