
#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
void ch(string s){
	s[0]=toupper(s[0]);
	for(long long i =1;i<s.length();i++) s[i]=tolower(s[i]);
	cout << s ;
}
int main() {
	long long t;
	cin>>t;
	while(t--){
		string s;
		int n;
		cin >> n;
		cin.ignore();
		getline(cin,s);
		stringstream ss(s);
		string tmp;
		vector<string> v;
		while(ss >> tmp){
			v.push_back(tmp);
		}
		if(n==1){
			ch(v[v.size()-1]);
			cout <<" ";
			for(long long i = 0;i<v.size()-1;i++){
				ch(v[i]);
				cout << " ";
			}cout << endl;
		}else if(n==2){
			for(long long i =1;i<v.size();i++){
				ch(v[i]);
				cout << " ";
			}ch(v[0]);
			cout << endl;
		}


	}

}
