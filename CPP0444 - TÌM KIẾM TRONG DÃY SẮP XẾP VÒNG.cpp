#include<iostream>
using namespace std;
int main(){
	long long t,n,x;
	cin >> t;
	while(t--){
		cin >> n >> x;
		long long a[n];
		for(long long &x : a) cin >> x;
		for(long long i=0;i<n;i++){
			if(a[i]==x) {
				cout << i+1 << endl;
				break;
			}
		}

	}







}
