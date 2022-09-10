
#include <iostream>

using namespace std;
int main() {
	long long t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long a[n],b[n];
		for(long long i=0;i<n;i++) {
			cin >> a[i];
			b[i]=a[i];
		}
		for(long long i=0;i<n;i++){
			if(i==0) a[i]*=b[i+1];
			else if(i==n-1) a[i]*=b[i-1];
			else a[i]=b[i-1]*b[i+1];
		}for(long long x : a) cout << x << " " ;
		cout << endl;
	}
}
