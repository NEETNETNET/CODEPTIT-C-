#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

void ch(string &s){
	s[0] = toupper(s[0]);
	for(long long i=1;i<s.length();i++) s[i] =tolower(s[i]);
	cout << s;
}
void ch1(string &s){
	for(long long i=0;i<s.length();i++) s[i]=toupper(s[i]);
	cout <<s;
}
int main(){
	string s;
	getline(cin , s);
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	for(long long i =0;i<v.size();i++) {
		if(i!=v.size()-1&&i!=v.size()-2){
			ch(v[i]);
			cout << " ";
		}

		else if(i==v.size()-2) {
			ch(v[i]);
			cout << ", ";
		}
		else {
			ch1(v[i]);
			cout << endl;
		}
	}

}

