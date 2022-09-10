#include<iostream>
using namespace std;

long long fb[1000];
void FB(){
	fb[0]=0;
	fb[1]=1;
	for(int i=2;i<1000;i++) fb[i]=fb[i-1]+fb[i-2];
}
int main(){
	FB();
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << fb[n] << endl;
	}
}
