
#include<iostream>
#include<algorithm>



using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--){
		long long n,k;
		cin >> n >> k;
		long long a[n*n];
		for(long long &x : a) cin >> x;
		sort(a,a+n*n);
		cout << a[k-1] << endl;
	}

}
