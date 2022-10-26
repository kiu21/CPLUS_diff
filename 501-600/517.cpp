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
    int N,Q; cin>>N>>Q;
    vector<int> Ns(N);//何番目か、ボール番号
    map<int,int> m;//ボール、何番目か
    rep(i,N){
        Ns[i]=i;
        m[i]=i;
    }
    rep(i,Q){
        int x; cin>>x; x--;
        int l,r; //何番目か
        int lnum,rnum;
        if(Ns[N-1]==x){
            l=N-1;
            r=N-2;
        }else{
            l=m[x];
            r=l+1;
        }
        lnum=Ns[l];
        rnum=Ns[r];
        m[x]=r;
        m[Ns[r]]=l;
        Ns[l]=rnum;
        Ns[r]=lnum;
    }
    rep(i,N) cout<<Ns[i]+1<<" ";
    cout<<endl;

    return 0;
}