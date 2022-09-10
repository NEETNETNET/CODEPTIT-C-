#include<iostream>

using namespace std;


int main(){
	long long t,n;
	cin >> t;
	while(t--){
		cin >> n;
		long long a[n],b[1000000]={0},cnt=0;
		for(long long i=0;i<n;i++) {
			cin >> a[i];
			b[a[i]]++;
		}for(long long i=0;i<n;i++){
			if(b[a[i]]>1){
				cnt++;
			}
		}cout << cnt << endl;

	}







}