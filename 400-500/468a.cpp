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
    // vector<ll> cnt(Q);

    map<ll,ll> m; //Xがc個
    queue<ll> num; //筒に入ってる種類
    rep(i,Q){
        int q; cin>>q;
        ll X,In,Out;
        if(q==1){ //mapで保持すると途中で同じ数字が入ったときに混ざってしまう
            cin>>X>>In;
            // cnt[i]+=In;
            
            m[X]+=In;
            num.push(X);
        }else{

            cin>>Out;
            // cnt[i]-=Out;

            if(m[num.front()]>Out){
                cout<<Out*num.front()<<endl;
                m[num.front()]-=Out;
            // }else if(m[num.front()]==Out){
            //     cout<<Out*num.front()<<endl;
            //     m[]
            
            }else{
                ll ans=0;
                while(Out>m[num.front()]){
                    ans+=num.front()*m[num.front()];
                    Out-=m[num.front()];
                    m[num.front()]=0;
                    num.pop();
                }
                ans+=num.front()*Out;
                m[num.front()]-=Out;
                if(m[num.front()]==0) num.pop();
                cout<<ans<<endl;
            }
        }
    }

    rep(i,Q){ //imos法でqのときの筒の中の個数を調べる
        // if(i>0) cnt[i]+=cnt[i-1];
    }


    return 0;
}