#include<iostream>
#include<algorithm>
using namespace std;

int main (){
	int t;
	cin>>t;
	while(t--){
		long long n,m;
		cin >> n >> m;
		long long a[n*m];
		for(long long &x : a) cin >> x;
		sort(a,a+m*n);
		for(long long x : a) cout << x << " ";
		cout << endl;
	}
}
