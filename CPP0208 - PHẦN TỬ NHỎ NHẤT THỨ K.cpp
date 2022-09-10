#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(long a,long b){
	return a < b;
}
int main(){
	long t,n,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		long a[n];
		for(long &x : a) cin >> x;
		sort(a,a+n,cmp);
		cout << a[k-1] << endl ;
	}









}