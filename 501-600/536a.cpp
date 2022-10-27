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
    int N,K; cin>>N>>K;
    vector<ll> a(N);
    rep(i,N) cin>>a[i];
    vector<ll> ans=a;
    sort(ans.begin(),ans.end());


    //bablesort tle
    rep(j,N/K){
        rep(i,N-K){
            if(a[i]>a[i+K]) swap(a[i],a[i+K]);
        }
    }
    rep(i,N){
        if(a[i]!=ans[i]){   
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;


    return 0;
}