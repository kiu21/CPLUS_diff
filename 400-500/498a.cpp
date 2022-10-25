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
    map<int,int> m;
    ll sum=0;
    rep(i,N){
        int A; cin>>A;
        m[A]++;
        sum+=A;
    }
    int Q; cin>>Q;
    rep(i,Q){
        int B,C ; cin>>B>>C;
        sum=sum-m[B]*(B-C);
        m[C]+=m[B];
        m[B]=0;
        cout<<sum<<endl;
    }
    
        return 0;
}