#include<iostream>
#include<iomanip>
using namespace std;


int main(){
	string a = "ABBADCCABDCCABD" ;//101
	string b = "ACCABCDDBBCDDBB" ;//102
	long long t;
	cin >> t;
	cin.ignore();
	while(t--){
		long long l=0;
		double diem=0;
		string s;
		getline(cin,s);
		if(s[2]=='1'){
			for(long long i=4;i<s.length();i+=2){
				if(s[i]==a[l]) diem+=10;
				l++;
			}
		}else if(s[2]=='2'){
			for(long long i=4;i<s.length();i+=2){
				if(s[i]==b[l]) diem+=10;
				l++;
			}
		}cout << fixed << setprecision(2) << diem/15 << endl;

	}











}
