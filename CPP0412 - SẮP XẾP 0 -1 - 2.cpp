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
		for(long long x : a) cout << x << " " ;
		cout << endl;
	}











}

