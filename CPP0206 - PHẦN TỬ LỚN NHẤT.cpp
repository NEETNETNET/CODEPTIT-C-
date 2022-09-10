#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	long long n,t;
	cin >> t;
	while(t--){
		cin >> n;
		long long a[n];
		for(long long &x : a) cin >> x;
		cout << *max_element(a,a+n) << endl;
	}

}
