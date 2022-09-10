#include<iostream>
#include<math.h>
using namespace std;

long long nt(long long n){
	if(n==0||n==1) return 0;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}return 1;
}
int main(){
	long long n;
	cin >> n;
	if(nt(n)) cout << "YES" << endl;
	else cout << "NO";




}
