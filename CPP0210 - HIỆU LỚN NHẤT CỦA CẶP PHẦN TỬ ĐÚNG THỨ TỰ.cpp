#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    long long t;
    cin >> t;
    while(t--){
    	long long n;
    	cin >> n;
    	long long a[n],res=0,ok=1;
    	for(long long &x:a) cin >> x;
    	for(long long i =0;i<n-1;i++){
    		for(long long k=i+1;k<n;k++){
    			if(a[k]-a[i]>0) {
    				res = max(res,a[k]-a[i]);
    				ok=0;
    			}
    		}
    	}if(ok) cout << -1 << endl;
    	else cout << res << endl;
    }
}
