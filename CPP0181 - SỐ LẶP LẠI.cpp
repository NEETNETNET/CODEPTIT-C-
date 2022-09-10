
#include<iostream>



using namespace std;
long long gcd(long long a,long long b){
	if(a==0||b==0) return a+b;
	while(a!=b){
		if(a>b) a-=b;
		else b-=a;
	}return a;
}
int main() {
	long long t;
	cin>>t;
	while(t--){
		long long a,x,y;
		cin >> a >> x >> y;
		for(long long i = 0;i<gcd(x,y);i++) cout << a;
		cout << endl;


	}

}
