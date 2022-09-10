#include<iostream>
#include<sstream>
using namespace std;
int main(){
	long long t;
	cin >> t;
	cin.ignore();
	while(t--){
		long long cnt = 0;
		string s;
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		while(ss >> tmp){
			cnt ++;
		}cout << cnt << endl ;

	}





}
