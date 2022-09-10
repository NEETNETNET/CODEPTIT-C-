#include<iostream>
using namespace std;



int main(){
	long long t,a,m;
	cin >> t;
	while(t--){
		long long res=-1;
		cin >> a >> m;
		for(long long i=0;i<m;i++){
			if((a*i)%m==1) {
				res = i;
				break;
			}
		}cout << res << endl;

	}







}
