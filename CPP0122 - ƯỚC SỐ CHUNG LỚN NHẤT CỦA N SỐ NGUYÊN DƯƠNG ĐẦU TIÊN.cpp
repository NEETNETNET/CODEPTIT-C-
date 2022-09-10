#include<iostream>
using namespace std;

long long gt(long long n){
	if(n==0||n==1) return 1;
	else return gt(n-1)* n;
}
int main(){
	long long n;
	long long sum=0;
	cin >> n;
	for(long long i=1;i<=n;i++) sum+=gt(i);
	cout << sum << endl;
}
