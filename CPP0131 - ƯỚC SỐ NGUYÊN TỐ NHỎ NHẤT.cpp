#include<iostream>
#include<math.h>
using namespace std;

void usnn(long long n){
	long long ok=1;
    for(long long i = 2;i<=sqrt(n);i++){
		if(n%i==0) {
			cout << i << " ";
			ok=0;
			break;
		}
	}if(ok) cout << n << " ";
}
int main(){
	long long t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		for(long long i = 1;i<=n;i++) usnn(i);
		cout << endl;
	}











}