
//115	CPP0212
#include<iostream>

using namespace std;


int main(){
	long long m=1e9+7;
    long long t;
    cin >> t;
    while(t--){
    	long long n,x;
    	cin >> n >> x;
    	long long a[n];
    	for(long long &x : a) cin >> x;
    	long long l=n,sum=0;
    	for(long long i = 0;i<n;i++){
    		long long res=1;
    		l--;
    		res*=a[i];
    		res%=m;
    		for(long long k=0;k<l;k++){
    			res*=x;
    			res%=m;
    		}sum+=res;
    		sum%=m;
    	}cout << sum << endl;
    }
}
