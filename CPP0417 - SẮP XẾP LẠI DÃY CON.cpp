#include<iostream>
#include<algorithm>
using namespace std;


int main(){
	long long t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n ;
		long long a[n],b[n];
		for(long long i=0;i<n;i++) {
			cin >> a[i];
			b[i]=a[i];
		}long long min=0,max=0;
		sort(a,a+n);
		for(long long i =0 ;i<n;i++){
			if(a[i]!=b[i]) {
				min=i;
				break;
			}
		}for(long long i =n-1 ;i>=0;i--){
			if(a[i]!=b[i]) {
				max=i;
				break;
			}
		}cout << min+1 << " " << max +1 << endl;

	}
}
