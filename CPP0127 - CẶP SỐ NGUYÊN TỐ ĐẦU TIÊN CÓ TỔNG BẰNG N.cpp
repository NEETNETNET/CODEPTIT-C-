#include<iostream>
#include<math.h>
using namespace std;

long long nt(long long n){
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}return 1;
}
int main (){
	int t;
	cin>>t;
	while(t--){
		long long n,ok=1;
		cin >> n ;
		for(long long i=2;i<=n/2;i++){
			if(nt(i)&&nt(n-i)) {
				ok=0;
				cout << i << " " << n-i <<endl;
				break;
			}
		}if(ok) cout << -1 << endl;
	}
}
