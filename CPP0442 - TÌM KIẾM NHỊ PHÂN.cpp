#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
	long long t,n,x;
	cin >> t;
	while(t--){
		cin >> n >> x;
		vector<long long> a(n);
		for(long long &x : a) cin >> x;
		if(find(a.begin(),a.end(),x)!=a.end()) cout << 1 << endl;
		else cout << -1 << endl;
	}









}
