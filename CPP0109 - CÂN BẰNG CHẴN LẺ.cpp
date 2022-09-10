//CPP0109
#include<iostream>
#include<math.h>
using namespace std;

long long cl(long long n){
	long long chan =0;
	long long le = 0;
	while(n>0){
		if((n%10)&1) chan++;
		else le++;
		n/=10;
	}if(chan==le) return 1;
	else return 0;
}
int main(){
	long long n,cnt=0;
	cin >> n;
	for(long long i=(long long) pow(10,n-1);i<(long long)pow(10,n);i++){
		if(cl(i)) {
			cout << i << " ";
			cnt++;
		}if(cnt==10) {
			cout << endl;
			cnt=0;
		}
	}
}
