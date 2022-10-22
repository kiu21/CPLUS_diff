#include <bits/stdc++.h>
using namespace std;
int main(){
#define IO ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);


IO
deque<pair<long,long>>dp;
int tc;
cin>>tc;
while(tc--){
    int a,b,c;
    cin>>a;
    if(a==1){
        cin>>b>>c;
        dp.push_back(make_pair(b,c));
    }else {
        cin>>b;
        long long sum=0;
        while(b>0){
            if(b==dp.front().second){
                sum+=(b*dp.front().first);
                b=0;
                dp.pop_front();
            }
            else if(b<dp.front().second){
                sum+=(b*dp.front().first);
                dp.front().second-=b;
                b=0;
            }else{
                sum+=(dp.front().second*dp.front().first);
                b-=dp.front().second;
                dp.pop_front();
            }
        }
        cout<<sum<<"\n";
    }

}
}