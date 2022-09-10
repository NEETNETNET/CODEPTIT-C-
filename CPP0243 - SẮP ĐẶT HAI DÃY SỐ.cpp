#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
	long long t;
	cin >> t;
	while(t--){
		vector<long long > v1,v2;
		long long m,n;
		cin >> m >> n;
		long long a[m],b[n],c[100000]={0};
		for(long long &x : a) {
			cin >> x;
			c[x]++;
		}
		for(long long &x : b) {
			cin >> x;
		}for(long long i =0;i<n;i++){
			if(c[b[i]]>0){
				for(long long k=0;k<c[b[i]];k++) v1.push_back(b[i]);
				c[b[i]]=0;
			}
		}sort(a,a+m);
		for(long long x : a) {
			if(c[x]!=0) v2.push_back(x);
		}
		for(long long x : v1) cout << x << " ";
		for(long long x : v2) cout << x << " ";
		cout << endl;
	}
}