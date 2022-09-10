#include<iostream>
#include<math.h>
using namespace std;

const long long l = 1e9 + 7;
long long fb[1000];
void FB(){
	fb[0]=0;
	fb[1]=1;
	for(int i=2;i<1000;i++) fb[i]=(fb[i-1]%l)+(fb[i-2]%l);
}
int main(){
	FB();
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << fb[n]%l << endl;
	}
}
