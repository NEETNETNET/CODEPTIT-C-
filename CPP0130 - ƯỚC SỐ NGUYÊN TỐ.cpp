#include<iostream>
#include<math.h>
using namespace std;

void usnt(long long n){
    for(long long i = 2;i<=sqrt(n);i++){
		while(n%i==0){
			n/=i;
			cout << i << " " ;
		}
	}if(n!=1) cout << n;
}
int main(){
	long long t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		usnt(n);
		cout << endl;
	}











}
