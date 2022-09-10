
#include<iostream>


using namespace std;

long long fb[10000];
void fbn(){
	fb[0]=0;
	fb[1]=1;
	for(long long i=2;i<10000;i++){
		fb[i]=fb[i-1]+fb[i-2];
	}
}
long long FB(long long n){
	fbn();
	for(long long i = 0;i<93;i++){
		if(n==fb[i]) return 1;
		if(fb[i]>n) return 0;
	}
}
int main() {
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin >> n;
		long long a[n];
		for(long long &x: a) cin >> x;
		for(long long x : a) if(FB(x)) cout << x << " ";
		cout << endl;
	}

}
