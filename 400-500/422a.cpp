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
    int N;cin>>N;
    vector<int> P(N),Q(N);
    rep(i,N) cin>>P[i];
    rep(i,N) cin>>Q[i];
    vector<int> permu(N);

    repp(i,1,N){
        permu[i-1]=i;
    }

    int cnt=1;
    int a,b;
    do{
        if(equal(P.begin(),P.end(),permu.begin(),permu.end())) a=cnt;
        if(equal(Q.begin(),Q.end(),permu.begin(),permu.end())) b=cnt;
        cnt++;
    }while(next_permutation(permu.begin(),permu.end()));

    cout<<abs(a-b)<<endl;

    return 0;
}