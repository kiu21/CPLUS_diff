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
    string S; cin>>S;
    deque<int> ans;
    deque<int> dq;

    rep(i,N){
        if(S[i]=='L'){
            dq.push_front(i);
        }else{
            ans.push_back(i);
        }
    }
    ans.push_back(N);

    while(!dq.empty()){
        ans.push_back(dq.front());
        dq.pop_front();
    }
    rep(i,N+1){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}