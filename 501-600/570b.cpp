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
    vector<int> a(N);
    rep(i,N) cin>>a[i];

    deque<int> cnts;
    deque<int> syurui;
    int cnt=1;
    cnts.push_front(cnt);
    int ans=1;
    syurui.push_front(a[0]);
    int pre=a[0];

    cout<<ans<<endl;

    repp(i,1,N-1){
        if(pre==a[i]){
            cnt++;
            cnts.pop_back();
        }else{
            syurui.push_back(a[i]);
        }
        cnts.push_back(cnt);

        ans++;
        if(cnts.back()==a[i]){
            syurui.pop_back();
            cnts.pop_back();
            cnt=cnts.back();
            ans-=a[i];
            pre=syurui.back();
        }else{
            pre=a[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
