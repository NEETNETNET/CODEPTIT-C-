

#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    long long t;
    cin >> t;
    while(t--){
    	long long n,d;
    	cin >> n >> d;
    	long long a[n];
    	for(long long &x : a) cin >> x;
    	for(long long i=d;i<n;i++) cout << a[i] << " ";
    	for(long long i=0;i<d;i++) cout << a[i] << " ";
    	cout << endl;
    }
}
