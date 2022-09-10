//109	CPP0141
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
int main() {
	fbn();
	long long t;
	cin>>t;
	while(t--){
		long long n;
		cin >> n;
		for(long long i = 0;i<93;i++){
			if(n==fb[i]) {
				cout<< "YES" << endl;
				break;
			}if(fb[i]>n){
				cout << "NO" << endl;
				break;
			}

		}
	}

}
