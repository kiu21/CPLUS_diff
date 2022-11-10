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
    vector<P> q(N); 
    rep(i,N){
        int l,r;
        cin>>l>>r;
        q.push_back({l,0});
        q.push_back({r,1});
    } 

    sort(q.begin(),q.end());
    int cnt=0;

    for(auto[t,f]:q){
        if(f==0){
            if(cnt==0) cout<<t<<' ';
            cnt++;
        }else{
            cnt--;
            if(cnt==0) cout<<t<<endl;
        }
    }


    return 0;
}