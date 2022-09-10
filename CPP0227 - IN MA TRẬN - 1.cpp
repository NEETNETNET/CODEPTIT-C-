#include<iostream>
using namespace std;


int main(){
	long long t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long a[n][n];
		for(long long i =0 ; i<n;i++){
			for(long long k =0 ; k <n ; k++){
				cin >> a[i][k];
			}
		}for(long long i =0 ; i<n;i++){
			if(i%2==0){
				for(long long k =0 ; k <n ; k++) cout << a[i][k]<< " ";
			}else {
				for(long long k=n-1;k>=0;k--) cout << a[i][k] << " ";
			}
		}cout << endl;
	}




}
