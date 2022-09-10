#include<iostream>
#include<sstream>
using namespace std;

int main(){
	string n,t;
	getline(cin,n);
	cin >> t;
	stringstream ss(n);
	string tmp;
	while(ss >> tmp) {
		if(tmp!=t) cout << tmp << " ";
	}



}
