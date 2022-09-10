//69	CPP0422
#include<iostream>
#include<vector>
using namespace std;


int main() {
	long long t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long a[n],cnt=0;
		vector<long long > v;
		for(long long &x :a) cin >> x;
		for(long long x :a){
			if(x!=0) v.push_back(x);
			else cnt++;
		}for(long long i=1;i<=cnt;i++) v.push_back(0);
		for(long long x : v) cout << x << " ";
		cout << endl;
	}
}
