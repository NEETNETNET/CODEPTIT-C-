#include<iostream>
using namespace std;


int main(){
	long long t;
	cin >> t;
	while(t--){
		long long b,c;
		string a;
		cin >> a >> b >> c;
		long long res=0;
		for(long long i =0 ;i < a.length();i++){
			res = (res * 10 + b*(a[i]-'0'))%c;
		}cout << res%c << endl;
	}




}