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

ll GCD(ll a, ll b)
{
  if (b == 0) return a;
  else return GCD(b, a % b);
}

ll LCM(ll a, ll b){
  return a*b / GCD(a, b);
}

int main()
{
    ll N,A,B; cin>>N>>A>>B;

    ll sigmaN,sigmaA,sigmaB,AB,sigmaAB;
    AB=LCM(A,B);

    sigmaN=N*(1+N)/2;
    ll kousuuA=N/A,kousuuB=N/B,kousuuAB=N/AB;

    sigmaA=kousuuA*(A+A*kousuuA)/2;
    sigmaB=kousuuB*(B+B*kousuuB)/2;
    sigmaAB=kousuuAB*(AB+AB*kousuuAB)/2;

    cout<<sigmaN-sigmaA-sigmaB+sigmaAB<<endl;

    return 0;
}