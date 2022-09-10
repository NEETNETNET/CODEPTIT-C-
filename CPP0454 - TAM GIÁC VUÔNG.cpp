#include<iostream>
#include<set>
#include<algorithm>
#include<math.h>
using namespace std;


int main(){
	long long t;
	cin >> t;
	while(t--){
		long long n,ok=1;
		multiset<long long > ms;
		cin >> n ;
		long long a[n];
		for(long long &x : a) {
			cin >> x;
			ms.insert(x);
		}sort(a,a+n);
		for(long long i=0;i<n-1;i++){
			for(long long k=i+1;k<n;k++){
				long long x =sqrt(a[i]*a[i]+a[k]*a[k]);
				long long y= a[i]*a[i]+a[k]*a[k];
				if(x*x==y){
					if(ms.find(x)!=ms.end()) {
						ok=0;
					}
				}
			}


		}if(ok) cout << "NO" << endl;
		else cout << "YES" << endl;

	}
}
