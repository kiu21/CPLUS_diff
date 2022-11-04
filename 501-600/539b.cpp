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

vector<int> dxs={1,0};
vector<int> dys={0,1};

int main()
{
	int H,W,X0,Y0; cin>>H>>W;
    X0=0,Y0=0;
	vector<string> S(H); rep(i,H) cin>>S[i];

	table dist(H,vector<int>(W,-1));
	queue<P> que;

	dist[X0][Y0]=0;
	que.push(P(X0,Y0));

	while(!que.empty()){
		auto [x,y]=que.front();
		que.pop();

		rep(i,2){
			int x2=x+dxs[i];
			int y2=y+dys[i];

			if(x2<0||x2>=H||y2<0||y2>=W) continue;
			if(S[x2][y2]=='#') continue;
			if(dist[x2][y2]!=-1) continue;
			
			dist[x2][y2]=dist[x][y]+1;
			que.push(P(x2,y2));
		}
	}

    int ans=0;
    rep(i,H){
        rep(j,W) chmax(ans,dist[i][j]);
    }
	cout<<ans+1<<endl;
	

  return 0;
}