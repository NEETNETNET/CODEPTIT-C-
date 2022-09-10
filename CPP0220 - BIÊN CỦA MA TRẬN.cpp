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
			for(long long k =0 ; k <n ; k++) {
				if(i==n-1||i==0||k==0||k==n-1) cout << a[i][k]<< " ";
				else cout << "  ";
			}
			cout << endl;
		}
	}




}
