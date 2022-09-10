//80	CPP0448
#include<iostream>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,cnt=0,k;
		cin>>n>>k;
		long long a[n];
		for(long long &x : a) cin>>x;
		for(long long x :a){
			if(x==k) cnt++;
		}if(cnt) cout << cnt << endl;
		else cout << -1 << endl;

	}
}
