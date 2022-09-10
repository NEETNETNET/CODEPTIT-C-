#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	long long n;
	double sum=0;
	cin >> n;
	for(long long i=1;i<=n;i++) sum+=(double)1/i;
	cout << fixed << setprecision(4) << sum << endl;
}
