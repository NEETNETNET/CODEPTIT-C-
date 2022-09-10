#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
	long long t;
	cin >> t;
	while(t--){
		long long n,k;
		cin >> n >> k;
		long long a[n];
		vector<long long> v;
		for(long long i=0;i<n;i++) cin >> a[i];
		long long res=a[0];
		for(long long i=0;i<k;i++) res=max(res,a[i]);
		v.push_back(res);
		for(long long i=k;i<n;i++){
			if(res!=a[i-k]) res=max(res,a[i]);
			else{
				res=a[i-k+1];
				for(long long l=i-k+1;l<=i;l++) res=max(res,a[l]);
			}
			v.push_back(res);
		}for(long long x : v) cout << x << " ";
		cout << endl;
	}
}
