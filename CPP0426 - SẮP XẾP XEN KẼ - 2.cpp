

#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    long long t;
    cin >> t;
    while(t--){
    	long long n;
    	cin >> n;
    	long long a[n],b[n];
    	for(long long &x : a) cin >> x;
    	sort (a,a+n);
    	long long l =n-1,r=0;
    	for(long long i = 0 ;i<n;i++){
    		if(i%2==0) b[i]=a[l--];
    		else b[i]=a[r++];
    	}for(long long x : b) cout << x << " ";
    	cout << endl;
    }
}
