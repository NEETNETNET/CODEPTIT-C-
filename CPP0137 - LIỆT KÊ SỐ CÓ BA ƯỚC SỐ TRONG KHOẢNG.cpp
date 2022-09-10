#include<iostream>
#include<math.h>

using namespace std;
int nt(long long n){
	if(n==1||n==0) return 0;
	for(long long i=2;i<=sqrt(n);i++) {
		if(n%i==0) return 0;
	}return 1;
}
int main(){
	long long t,a,b;
	cin >> t;
	while(t--){
		long long cnt=0;
		cin >> a >> b;
		for(long long i=sqrt(a);i<=sqrt(b);i++) if(nt(i)) cnt++;
		cout  << cnt << endl;
	}









}
