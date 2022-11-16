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
    ll N;cin>>N;
    vector<int> nums;
    while(N>0){
        N--;//これがないとN=26の時azとなってしまう。
        nums.push_back(N%26);
        N/=26;
    }
    string ans;
    string abc="abcdefghijklmnopqrstuvwxyz";
    rep(i,nums.size()) ans=abc[nums[i]]+ans;
    cout<<ans<<endl;
    return 0;
}