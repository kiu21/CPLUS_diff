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
    int K,N; cin>>N>>K;
    vector<int> p(N); rep(i,N) cin>>p[i];

    //sigma(Pi)/piの最大をもとめればよい
    vector<double> cum(N); //累積和 cumlative sum
    cum[0]=p[0];
    repp(i,1,N-1){
        cum[i]=p[i]+cum[i-1];
    }

    int max_ite=0,max_cum=0;
    rep(i,N-K+1){
        if(cum[i+K-1]-cum[i]>max_cum){
            max_ite=i;
            max_cum=cum[i+K]-cum[i];            
        }
    }
    double ans=0;
    rep(i,K){
        ans+=1.0*(1+p[i+max_ite])/2;
    }
    printf("%.10f\n",ans);
    return 0;
}