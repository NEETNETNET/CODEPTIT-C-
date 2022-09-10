#include<iostream>
#include<math.h>
using namespace std;

long long nt(long long n){
	if(n==0||n==1) return 0;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}return 1;
}
int main(){
	long long a,b,t;
	cin >> t;
	while(t--){
		cin >> a>> b;
		if(a<=b) {
			for(long long i=a;i<=b;i++) if(nt(i)) cout << i << " ";
		}else {
			for(long long i=b;i<=a;i++) if(nt(i)) cout << i << " ";
		}cout << "\n";
	}





}