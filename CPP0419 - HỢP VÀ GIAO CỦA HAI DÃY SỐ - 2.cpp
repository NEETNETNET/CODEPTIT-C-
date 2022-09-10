//152	CPP0419
#include<iostream>
#include<set>


using namespace std;
int main() {
	long long t;
	cin>>t;
	while(t--){
		set<long long > s;
		set<long long > v;
		long long n,m;
		cin >> n >> m;
		long long a[200000]={0},b[n],c[m];
		for(long long &x : b) {
			cin >> x;
			s.insert(x);
			a[x]++;
		}for(long long &x :c){
			cin >> x;
			s.insert(x);
			a[x]++;
		}for(long long x : s) cout << x << " ";
		cout << endl;
		for(long long x :b) if(a[x]>1) v.insert(x);
		for(long long x : v) cout << x <<  " ";
		cout<< endl;



	}

}
