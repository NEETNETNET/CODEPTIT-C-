#include<iostream>
#include<math.h>

using namespace std;

void check(string x){
	long long chan=0,le=0;
	for(long long i=0;i<x.length();i++){
		if(i%2==0) chan+=(x[i]-'0');
		else le+=(x[i]-'0');
	}if(abs(chan-le)%11==0) cout << 1 << endl;
	else cout << 0 << endl;
}
int main() {
	long long t;
	cin>>t;
	while(t--){
		string s;
		cin >> s;
		check(s);
	}

}
