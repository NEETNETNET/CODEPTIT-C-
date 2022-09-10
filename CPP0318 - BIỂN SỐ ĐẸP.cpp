#include<iostream>
using namespace std;
int check1(string s){
	if(s[5]<s[6]&&s[6]<s[7]&&s[7]<s[9]&&s[9]<s[10])return 1;
	return 0;
}
int check3(string s){bool ok1=false ,ok2=false;
	if(s[5]==s[6]&&s[6]==s[7])ok1=true;
	if(s[9]==s[10])ok2=true;
	if(ok1&&ok2)return 1;
	return 0;
}
int check4(string s){
	if(s[5]!='6'&&s[5]!='8')return 0;
	if(s[6]!='6'&&s[6]!='8')return 0;
	if(s[7]!='6'&&s[7]!='8')return 0;
	if(s[9]!='6'&&s[9]!='8')return 0;
	if(s[10]!='6'&&s[10]!='8')return 0;
	return 1;
}
int main(){
	int t;cin>>t;cin.ignore();
	while(t--){
		string s;getline(cin,s);
		if(check1(s)||check3(s)||check4(s)){
			cout<<"YES"<<endl;
		}
		else {
		cout<<"NO"<<endl;
		}
	}
}
