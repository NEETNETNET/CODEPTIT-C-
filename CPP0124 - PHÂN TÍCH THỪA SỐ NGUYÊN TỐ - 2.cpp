#include<iostream>
#include<math.h>
using namespace std;

void tsnt(long long n){
    for(long long i = 2;i<=sqrt(n);i++){
		long long cnt = 0;
		while(n%i==0){
			cnt++;
			n/=i;
		}if(cnt) cout << i << " " << cnt << endl ;
	}if(n!=1) cout << n << " " << 1 << endl;
}
int main(){
	long long n;
	cin >> n;
	tsnt(n);










}
