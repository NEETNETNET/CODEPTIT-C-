#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long m,n,a,b,cnt=0;
		cin >> m >> n >> a >> b;
		for(long long i=m;i<=n;i++){
			if(i%a==0||i%b==0) cnt++ ;
		}cout << cnt << endl;

	}
}
