#include<iostream>
using namespace std;

long long GCD(long long a,long long b){
	if(a==0||b==0) return a+b;
	while(a!=b){
		if(a>b) a-=b;
		else b-=a;
	}return a;
}
long long LCM(long long a,long long b){
	long long l=GCD(a,b);
	return a*b/l;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long a,b;
		cin >> a >> b;
		cout << LCM(a,b) << " "<< GCD(a,b) << endl;
	}
}
