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
    vector<string> S(N); rep(i,N) cin>>S[i];

    vector<vector<int>> slot(10);
    rep(i,10){ //どの番号か
        rep(j,N){
            rep(k,10){ //番号が何番目か
                char c='0'+i;
                if(S[j][k]==c) slot[i].push_back(k);

            }
        }
    }

    int ans=101010;
    rep(i,10){
        int cnt=0;
        vector<bool> used(10,false);
        sort(slot[i].rbegin(),slot[i].rend());
        rep(j,N){
            if(!used[slot[i][j]]){
                used[i]=true;
            }else{
                cnt+=10;
            }
        }
        cnt+=slot[i][0];
        chmin(ans,cnt);
    }
    cout<<ans<<endl;
    return 0;
}
