
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 long long tong(string n){
	 long long l=0,sum=0;
	 while(l<n.length()){
		 if(n[l]-'0'>=0&&n[l]-'0'<=9) {
			 sum+=n[l]-'0';
	 	}l++;
	 }return sum;
 }
int main() {
	long long t;
	cin>>t;
	while(t--){
		vector<char> n;
		string s;
		cin >> s ;
		for(long long i=0;i<s.length();i++){
			if(s[i]-'0'>9||s[i]-'0'<0) n.push_back(s[i]);
		}sort(n.begin(),n.end());
		for(char x : n) cout << x;
		cout<<tong(s)<<endl;


	}

}
