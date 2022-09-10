

#include<iostream>
#include<math.h>
using namespace std;

long long nt(long long n){
	if(n==0||n==1) return 0;
	for(long long i = 2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}return 1;
}
long long tcs(long long n){
	long long sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}return sum;
}
long long tus(long long n){
	long long sum=0;
	for(long long i =2 ;i <=sqrt(n);i++){
		while(n%i==0){
			sum+=tcs(i);
			n/=i;
		}
	}if(n!=1) sum+=tcs(n);
	return sum;
}
int main(){
    long long t;
    cin >> t;
    while(t--){
    	long long n;
    	cin >> n;
    	if(!nt(n)&&tcs(n)==tus(n)) cout << "YES" << endl;
    	else cout << "NO" <<endl;
    }
}
