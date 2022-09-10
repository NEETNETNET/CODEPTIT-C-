
#include<iostream>
#include<math.h>
using namespace std;


int main() {
	long long t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long a[n];
		for(long long &x : a) cin >> x;
		long long sum=abs(a[0]+a[1]),res=0;
		for(long long i=0;i<n-1;i++){
			for(long long k=i+1;k<n;k++) {
				if(sum>abs(a[i]+a[k])){
					sum=abs(a[i]+a[k]);
					res=a[i]+a[k];
				}
			}
		}cout << res << endl;

	}
}
