
#include<iostream>
#include<sstream>
#include<set>



using namespace std;

int main() {
	long long t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a,b;
		getline(cin,a);
		getline(cin,b);
		stringstream ss1(a);
		stringstream ss2(b);
		string tmp1,tmp2;
		set<string> s1,s2;
		while(ss1 >> tmp1){
			s1.insert(tmp1);
		}while(ss2 >> tmp2){
			s2.insert(tmp2);
		}for(string x : s1) {
			if(s2.find(x)==s2.end()) cout << x << " ";
		}cout << endl;
	}

}
