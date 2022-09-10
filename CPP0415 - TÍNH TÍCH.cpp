#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(long long a,long long b){
	return a>b;
}
int main (){
	int t;
	cin>>t;
	while(t--){
		long long n,m;
		cin >> n >> m;
		long long a[n],b[m];
		for(long long &x : a) cin >> x;
		for(long long &x : b) cin >> x;
		sort(a,a+n,cmp);
		sort(b,b+m);
		cout << a[0]*b[0] <<endl;
	}
}
