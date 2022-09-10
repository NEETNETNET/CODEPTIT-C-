

#include<iostream>
#include<math.h>
using namespace std;

long long nt(long long n){
	if(n==0||n==1) return 0;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}return 1;

}
long long tang(long long n){
	while(n>=10){
		long long l=n%10;
		n/=10;
		long long k=n%10;
		if(l<=k) return 0 ;
	}return 1;
}
long long giam(long long n){
	while(n>=10){
		long long l=n%10;
		n/=10;
		long long k=n%10;
		if(l>=k) return 0 ;
	}return 1;

}
int main(){
    long long t;
    cin >> t;
    while(t--){
    	long long n,cnt=0;
    	cin >> n;
    	long long a=1;
    	for(long long i=0;i<n-1;i++) a*=10;
    	for(long long i = a;i<a*10;i++){
    		if(giam(i)||tang(i)){
    			if(nt(i)) cnt++;
    		}

    	}cout << cnt << endl;
    }
}
