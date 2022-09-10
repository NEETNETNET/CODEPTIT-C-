#include<iostream>
#include<algorithm>
using namespace std;


bool cmp(long a,long b){
	return a < b;
}
int main(){
	long t,n;
	cin >> t;
	while(t--){
		cin >> n;
		long a[n];
		for(long &x : a) cin >> x;
		sort(a,a+n,cmp);
		if(a[1]!=a[0]) cout << a[0] << " " << a[1]<< endl;
		else cout << -1 << endl;

	}







}
