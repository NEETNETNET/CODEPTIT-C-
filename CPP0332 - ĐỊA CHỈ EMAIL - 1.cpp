#include<iostream>
#include<sstream>
#include<vector>
using namespace std;


int main(){
	string s;
	getline(cin , s);
	for(long long i =0; i<s.length();i++) s[i]=tolower(s[i]);
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss >> tmp){
		v.push_back(tmp);
	}cout << v[v.size()-1];
	for(long long i =0;i<v.size()-1;i++) cout << v[i][0];
	cout <<"@ptit.edu.vn";
}

