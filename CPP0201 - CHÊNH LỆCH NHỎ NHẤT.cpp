#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	long long t,n;
	cin >> t;
	while(t--){
		cin >> n;
		long long a[n];
		for(long long &x : a) cin >> x;
		sort(a,a+n);
		long long res=a[1]-a[0];
		for(long long i=2;i<n;i++) res=min(res,a[i]-a[i-1]);
		cout << res << endl ;
	}









}
