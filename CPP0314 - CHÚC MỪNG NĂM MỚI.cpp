#include<iostream>
#include<set>
using namespace std;


int main(){
	long long n;
	set<string > s;
	cin >> n;
	cin.ignore();
	for(long long i =0;i<n;i++) {
		string x;
		getline(cin ,x);
		s.insert(x);
	}cout << s.size() << endl;




}
