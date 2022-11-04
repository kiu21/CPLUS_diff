#include <bits/stdc++.h>
using namespace std;

int main() {
    
	int N,K;
	cin>>N>>K;//K=1はバブルソートで必ず昇順になる
	
	
	vector<int> a(N);
	for(int i=0;i<N;i++){
		cin>>a[i];
	}
	
	rep(i,K){
		vector<int> b;
		for(int j=i;i<N;i+=K){
			b.push_back(a[i]);
		}
		sort(b.begin(),b.end());//ここまででKで割った余りが0~K-1のグループそれぞれについてソート

		for(int j=i; j<N;j+=K){//0~K-1のグループそれぞれをAに入れる
			a[j]=b[j/K];
		}
	}	

	vector<int> na =a;
	sort(na.begin(),na.end());

	if(a==na)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	
    return 0;
}
