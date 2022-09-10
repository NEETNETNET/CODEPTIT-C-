#include<iostream>
using namespace std;

int lp(long long n){
	while(n>0){
		int l=n%10;
		if(l!=8&&l!=0&&l!=6) return 0;
		n/=10;
	}return 1;
}
int main(){
	long long n,t;
	cin >> t;
	while(t--){
		cin >> n;
		if(lp(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

}
