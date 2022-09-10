#include<iostream>
using namespace std;

int main (){
	int t;
	cin>>t;
	while(t--){
		long long n,x,cnt = 0;
		cin >> n >> x;
		long long a[n];
		for(long long &x : a) cin >> x;
		for(long long i=0;i<n-1;i++){
			for(long long k=i+1;k<n;k++){
				if(a[i]+a[k]==x) cnt++;
			}
		}cout << cnt << endl;
	}
}
