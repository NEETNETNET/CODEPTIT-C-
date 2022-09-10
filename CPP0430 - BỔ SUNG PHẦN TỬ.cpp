// 72	CPP0430
#include<iostream>
#include<algorithm>
using namespace std;

int main (){
	int t;
	cin>>t;
	while(t--){
		long long n,cnt=0;
		cin >> n ;
		long long a[n];
		for(long long &x : a) cin >> x;
		sort(a,a+n);
		for(long long i=0;i<n-1;i++) if((a[i]+1)!=a[i+1]&&a[i]!=a[i+1]) cnt+=a[i+1]-a[i]-1;
		cout << cnt << endl;
	}
}
