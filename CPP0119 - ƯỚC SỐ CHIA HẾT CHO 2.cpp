
#include<iostream>
#include<math.h>

using namespace std;


long long ch2(long long n){
	long long cnt=0;
	for(long long i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(i%2==0) cnt++;
			if(n/i%2==0) cnt++;
			if(i%2==0&&n/i%2==0&&i==n/i) cnt--;
		}

	}return cnt;
}
int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin >> n;
		cout << ch2(n) <<endl;
	}

}
