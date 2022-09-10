

#include<iostream>
#include<set>
using namespace std;


int main(){
    long long t;
    cin >> t;
    while(t--){
    	long long n;
    	set<long long > s;
    	cin >> n;
    	long long a[n],b[n];
    	for(long long &x : a) {
    		cin >> x;
    		s.insert(x);
    	}for(long long i =0 ; i< n;i++){
    		if(s.find(i)!=s.end()) b[i]=i;
    		else b[i]=-1;
    	}for(long long x : b) cout << x << " ";
    	cout << endl;
    }
}
