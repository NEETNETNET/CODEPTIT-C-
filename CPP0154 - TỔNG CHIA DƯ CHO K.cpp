#include<iostream>
using namespace std;

int main(){
	long long t,a,b;
	cin >> t;
	while(t--){
		long long res = 0;
		cin >> a >> b;
		for(long long i=1;i<=a;i++) {
			res+=(i%b);
		}
		if(res == b) cout  << 1 << endl;
		else cout << 0 << endl;
	}









}
