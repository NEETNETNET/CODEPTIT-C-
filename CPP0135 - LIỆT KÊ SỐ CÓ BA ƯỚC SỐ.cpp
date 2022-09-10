#include<iostream>
#include<math.h>

using namespace std;
int nt(long long n){
	for(long long i=2;i<=sqrt(n);i++) {
		if(n%i==0) return 0;
	}return 1;
}
int main(){
	long long t,a;
	cin >> t;
	while(t--){
		cin >> a;
		for(long long i=2;i<=sqrt(a);i++) if(nt(i)) cout << i*i << " ";
		cout  << "\n";
	}









}
