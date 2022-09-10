
#include<iostream>
#include<math.h>


using namespace std;
long long nt(long long n){
	if(n==0|n==1) return 0;
	for(long long i =2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}return 1;
}long long gcd(long long a,long long b){
	if(a==0||b==0) return a+b;
	while(a!=b){
		if(a>b) a-=b;
		else b-=a;
	}return a;
}
int main() {
	long long t;
	cin>>t;
	while(t--){
		long long x,cnt=0;
		cin >> x;
		for(long long i=1;i<=x;i++){
			if(gcd(i,x)==1) cnt++;
		}if(nt(cnt)) cout << 1 << endl;
		else cout << 0 << endl;

	}

}
