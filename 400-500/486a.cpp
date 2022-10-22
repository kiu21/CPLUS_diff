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
    string c; cin>>c;

    int cnt1=0,cnt2=0; //red、white
    rep(i,N) if(c[i]=='R')cnt1++;
    int ans=cnt1;
    rep(i,N){//最終状態のredの個数を0-元の個数まで回す
        if(c[i]=='R') cnt1--;//redだと入れ替えない
        else cnt2++;
        int now = max(cnt1,cnt2);
        ans=min(ans,now);
    }
    
    cout<<ans<<endl;
    return 0;
}