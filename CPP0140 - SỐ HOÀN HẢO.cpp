
#include<iostream>
#include<math.h>


using namespace std;
long long hh[1000];
long long nt(long long n){
	if(n==1||n==0) return 0;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}return 1;
}
void HH(){
	long long l=0;
	for(long long i=2;i<=56;i++){
		long long m=pow(2,i)-1;
		if(nt(i)&&nt(m)) {
			long long k=pow(2,i-1)*(pow(2,i)-1);
			hh[l++]=k;
		}
	}
}
int main() {
	HH();
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin >> n;
		for(long long x : hh){
			if(n==x) {
				cout << 1 << endl;
				break;
			}
			if(n<x){
				cout << 0 << endl;
				break;
			}
		}
	}

}
