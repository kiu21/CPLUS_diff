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
    int N; cin>>N;
    string S; cin>>S;
    int Q ; cin>>Q;
    vector<int> T(Q),A(Q),B(Q);
    rep(i,Q) cin>>T[i]>>A[i]>>B[i];
    
    int cnt=0;
    rep(i,Q){
        if(T[i]==2) cnt++;
        else{
            if(cnt%2==0){
                char l=S[A[i]-1];
                char r=S[B[i]-1];
                S[A[i]-1]=r;
                S[B[i]-1]=l;
            }else{
                if(A[i]<=N && B[i]<=N){
                    char l=S[A[i]+N-1];
                    char r=S[B[i]+N-1];
                    S[A[i]-1+N]=r;
                    S[B[i]-1+N]=l;
                }else if(A[i]>N && B[i]>N){
                    char l=S[A[i]-N-1];
                    char r=S[B[i]-N-1];            
                    S[A[i]-N-1]=r;
                    S[B[i]-N-1]=l;
                }else if(A[i]<=N){
                    char l=S[A[i]+N-1];
                    char r=S[B[i]-N-1];
                    S[A[i]+N-1]=r;
                    S[B[i]-N-1]=l;
                }else{
                    char l=S[A[i]-N-1];
                    char r=S[B[i]+N-1];
                    S[A[i]-N-1]=r;
                    S[B[i]+N-1]=l;
                }
            }
        
        }
    }
    string ans;
    if(cnt%2==1){
        rep(i,N) ans+=S[i+N];
        rep(i,N) ans+=S[i];
    }else{
        ans=S;
    }
    cout<<ans<<endl;

    return 0;
}