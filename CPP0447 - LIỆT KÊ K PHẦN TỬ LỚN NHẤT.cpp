#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(long long a,long long b){
	return a > b;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long a[n];
		for(long long &x : a) cin >> x;
		sort(a,a+n,cmp);
		for(long long i=0;i<k;i++) cout << a[i] << " ";
		cout << endl;
	}
}
