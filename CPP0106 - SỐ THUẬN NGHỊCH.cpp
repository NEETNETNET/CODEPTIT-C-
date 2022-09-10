#include<iostream>
using namespace std;

int tn(long long n){
	long long dao=0,m=n;
	while(n>0){
		int l=n%10;
		dao=dao*10+l;
		n/=10;
	}if(dao==m) return 1;
	return 0;
}
int main(){
	long long n,t;
	cin >> t;
	while(t--){
		cin >> n;
		if(tn(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

}
