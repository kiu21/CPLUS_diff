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
    ll X,A,D,N; cin>>X>>A>>D>>N;
    ll ans=0;
    if(X<A || D==0) cout<<abs(A-X)<<endl;
    else if(X>A+N*D && N*D>0) cout<<X-(A+N*D)<<endl;
    else if(X>A-N*D && N*D<0) cout<<X-(A)<<endl;
    else{
        ll pre=X-A;
        ll quotient=pre/D;
        ans=min(abs(X-(A+quotient*D)),abs(X-(A+(quotient+1)*D)));
        cout<<ans<<endl;
        
    }
    
    return 0;
}