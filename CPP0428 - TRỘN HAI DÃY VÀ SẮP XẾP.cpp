#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	long t,m,n;
	cin >> t;
	while(t--){
		cin >> m >> n;
		long a[m+n],b[n];
		for(long i=0;i<n;i++) cin >> a[i];
		for(long &x : b) cin >> x;
		long k=0;
		for(long i = m;i<m+n;i++) a[i]=b[k++];
		sort(a,a+m+n);
		for(long i = 0;i<m+n;i++) cout << a[i] << " ";
		cout << endl;
	}









}