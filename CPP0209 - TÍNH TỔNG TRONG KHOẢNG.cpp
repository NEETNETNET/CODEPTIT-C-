//40	CPP0209
#include<iostream>
using namespace std;


int main() {
	long long t;
	cin >> t;
	while(t--){
		long long n,k;
		cin >> n >> k;
		long long a[n];
		for(long long &x : a) cin >> x;
		while(k--){
			long long l,r,sum=0;
			cin >> l >> r;
			for(long long k=l-1;k<r;k++) sum+=a[k];
			cout << sum << endl;
		}
	}
}
