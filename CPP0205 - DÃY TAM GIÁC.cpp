#include<iostream>
#include<algorithm>
using namespace std;

int main (){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin >> n;
		long long a[n];
		for(long long &x : a) cin >> x;
		sort(a,a+n);
		cout << a[n-1] << endl;
	}
}
