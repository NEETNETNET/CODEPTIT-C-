#include<iostream>
#include<math.h>
using namespace std;

long long spn(long long n){
	long long res=0;
    for(long long i = 2;i<=sqrt(n);i++){
    	long long cnt=0;
    	if(n%i==0) res++;
    	while(n%i==0) {
    		n/=i;
    		cnt++;
    	}if(cnt>1) return 0;
    	if(n==i) return 0;
    }if(n!=1) res++;
    if(res==3) return 1;
	return 0;
}
int main(){
	long long t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(spn(n)) cout << 1 << endl;
		else cout << 0 << endl;
	}
}