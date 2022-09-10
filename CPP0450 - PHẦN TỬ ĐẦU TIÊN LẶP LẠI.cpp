//81	CPP0450
#include<iostream>
using namespace std;


int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,ok=1;
		cin>>n;
		long long a[n],b[1000000]={0};
		for(long long &x : a) cin>>x;
		for(long long x :a){
			b[x]++;
			if(b[x]>1) {
				cout << x << endl;
				ok=0;
				break;
			}
		}if(ok) cout << -1 << endl;

	}
}
