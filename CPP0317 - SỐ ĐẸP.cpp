
#include<iostream>



using namespace std;

long long tn(string s){
	long long r=0,l=s.length()-1;
	while(r<l){
		if(s[r]!=s[l]||(s[r]-'0')%2!=0) return 0;
		r++;
		l--;
	}return 1;
}
int main() {
	long long t;
	cin>>t;
	while(t--){
		string s;
		cin >> s;
		if(tn(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

}
