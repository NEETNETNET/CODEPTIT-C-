#include<iostream>
using namespace std;


int main(){
	long long t,n;
	cin >> t;
	while(t--){
		cin >> n;
		for(long long i = 2;i<=n;i++){
			long long cnt = 0;
			while(n%i==0){
				cnt++;
				n/=i;
			}if(cnt) cout << i << " " << cnt << " " ;
		}if(n!=1) cout << n <<" " << 1;
		cout << endl;
	}









}