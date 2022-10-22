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
    string S; cin>>S;

    int ans=0;

    repp(i,0,9999){
        vector<int> num(4);
        num[0]=i/1000;
        num[1]=(i%1000)/100;
        num[2]=(i%100)/10;
        num[3]=i%10;

        bool flag=true;
        rep(i,10){
            if(S[i]=='x'){
                if(num[0]==i or num[1]==i or num[2]==i or num[3]==i) flag=false;
            }else
            if(S[i]=='o'){
                if(num[0]!=i and num[1]!=i and num[2]!=i and num[3]!=i) flag=false;
            }
        }
        if(flag) ans++;

    }

    cout<<ans<<endl;
    return 0;
}
