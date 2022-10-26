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

//解法１：4通りで切ったときの三角形の面積の和が一致するか
//解法２：

struct V{
    int x,y;
    V(int x=0,int y=0) : x(x),y(y){}
    V operator -(const V& a) const{
        return V(x-a.x, y-a.y);
    }
    int cross(const V& a) const {
        return x*a.y -y*a.x;
    }
    int ccw(const V& a) const{
        int area = cross(a);
        if(area>0) return +1; //ccw
        if(area<0) return -1; //cw
        return 0; //colinear
    }
    ;
};

int main()
{
    vector<V> p(4);
    rep(i,4) cin>>p[i].x>>p[i].y ;
    rep(i,4){
        V A=p[i];
        V B=p[(i+1)%4];
        V C=p[(i+2)%4];
        V b = B-A,c=C-A;
        if(b.ccw(c) != 1){
            cout<<"No"<<endl;
            return 0;
        }
    }   
    if()
    return 0;
}