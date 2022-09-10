#include<iostream>
using namespace std;

long long tcs(long long n){
	long long sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}return sum;
}
int main() {
	long long t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		while(n>=10){
			n=tcs(n);
		}cout << n << endl;

	}
}
