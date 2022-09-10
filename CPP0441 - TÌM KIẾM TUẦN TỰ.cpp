//73	CPP0441
#include<iostream>
using namespace std;

int main (){
	int t;
	cin>>t;
	while(t--){
		long long n,x,ok=0;
		cin >> n >> x ;
		long long a[n];
		for(long long &x : a) cin >> x;
		for(long long i=0;i<n;i++) {
			if(a[i]==x){
			cout << i+1 << endl;
			ok=1;
			break;
			}
		}if(!ok) cout << -1 << endl;
	}
}
