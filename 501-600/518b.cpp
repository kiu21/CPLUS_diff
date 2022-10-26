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
    int Q; cin>>Q;
    vector<ll> s(mod);
    priority_queue<ll> pq;
    priority_queue<ll,vector<ll>,greater<ll>> rpq;

    rep(i,Q){
        ll que; cin>>que;
        if(que==1){
            ll x;cin>>x;
            s[x]++;
            pq.push(x);
            rpq.push(x);
            continue;
        }else if(que==2){
            ll x,c; cin>>x>>c;
            s[x]-=min(c,s[x]);
            continue;
        }else if(que==3){
            while(s[pq.top()]==0) pq.pop();
            while(s[rpq.top()]==0) rpq.pop();
            cout<<pq.top()-rpq.top()<<endl;
            continue;
        }
    }
    return 0;
} 