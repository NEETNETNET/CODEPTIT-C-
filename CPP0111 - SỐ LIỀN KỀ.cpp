#include<iostream>
#include<math.h>
using namespace std;

long long lk(long long n){
	long long l,k;
	while(n>0){
		l = n%10;
		n/=10;
		k = n%10;
		if(n<10) break;
		if(abs(k-l)!=1) return 0;
	}return 1;
}
int main (){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin >> n;
		if(lk(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}