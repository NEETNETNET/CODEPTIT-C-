#include<iostream>
#include<set>
using namespace std;


int main(){
	int t;
	cin >> t;
	int a[t];
	set<int> s;
	for(int &x : a) cin >> x;
	for(int x: a) s.insert(x);
	for(int x : s) cout << x  << " ";
}
