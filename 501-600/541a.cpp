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
    int h1,h2,h3,w1,w2,w3; cin>>h1>>h2>>h3>>w1>>w2>>w3;

    ll ans=0;
    repp(i,1,min(h1,w1)-2){
        repp(h,1,min(h2-2,w1-i-1)){
            repp(w,1,min(w2-2,h1-i-1)){
                repp(x,1,min(w2-h-1,h2-w-1)){
                    int x7=w1-i-h,x8=w2-w-x;
                    int x5=h1-i-w,x6=h2-h-x;
                    if(x7+x8>=h3)continue;
                    if(x5+x6>=w3)continue;
                    if(w3-x5-x6==h3-x7-x8)   ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}