#include<iostream>
#include<math.h>
using namespace std;

void usntln(long long n){
	long long res;
    for(long long i = 2;i<=sqrt(n);i++){
		while(n%i==0){
			n/=i;
			res=i;
		}
	}if(n!=1) res=n;
	cout << res << endl;
}
int main(){
	long long t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		usntln(n);
	}











}
