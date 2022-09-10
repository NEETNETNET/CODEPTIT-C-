#include<iostream>
#include<set>
using namespace std;

int main (){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin >> n;
		long long a[n];
		set<long long> s;
		for(long long &x : a) cin >> x;
		for(long long x : a){
			while(x>0){
				s.insert(x%10);
				x/=10;
			}
		}
		for(long long x : s) cout << x << " ";
		cout << endl;
	}
}
