#include<iostream>

using namespace std;



int main(){
	long long t,x,y,p;
	cin >> t;
	while(t--){
		long long res =1;
		cin >> x >> y >> p;
		for(long long i = 0;i<y;i++){
			res*=x;
			res%=p;
		}cout << res << endl;

	}







}
