
#include<iostream>


using namespace std;
long long du(string s,long long n){
	long long sum=0;
	for(long long i = s.length()-1;i>=0;i--){
		long long res=1;
		res*=s[i]-'0';
		res%=n;
		for(long long k=0;k<s.length()-1-i;k++){
			res*=10;
			res%=n;
		}sum+=res;
		sum%=n;
	}return sum;
}
int main() {
	long long t;
	cin>>t;
	while(t--){
		long long n;
		string s;
		cin >> s >> n;
		cout << du(s,n) << endl;




	}

}
