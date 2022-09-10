#include<iostream>

using namespace std;


int main(){
    long long t;
    cin >> t;
    while(t--){
    	long long n;
    	cin >> n;
    	long long a[n];
    	for(long long &x:a) cin >> x;
    	long long sum=0,sum1=0,ok=1;
    	for(long long x : a) sum+=x;
    	for(long long i =0 ;i<n;i++) {
    		sum1+=a[i];
    		if(sum1==sum-a[i+1]-sum1){
    			ok=0;
    			cout << i+2 <<endl;
    			break;
    		}
    	}if(ok) cout << -1 << endl;
    }
}
