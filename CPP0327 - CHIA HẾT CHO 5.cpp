#include<iostream>
using namespace std;

long long nam(string s){
	long long sum=0,tmp=1;
	for(long long i =s.length()-1;i>=0;i--){
		sum+=(s[i]-'0')*tmp;
		tmp*=2;
		tmp%=5;
		sum%=5;
	}if(sum==0) return 1;
	return 0;
}
int main(){
	long long t;
	cin >> t;
	while(t--){
		string n;
		cin >> n;
		if(nam(n)) cout << "Yes" << endl;
		else cout << "No" << endl ;
	}




}