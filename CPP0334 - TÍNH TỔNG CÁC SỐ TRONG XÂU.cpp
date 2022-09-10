#include<iostream>
using namespace std;

long long tong(string n){
	long long res=0,l=0,sum=0;
	while(l<n.length()){
		if(n[l]-'0'>=0&&n[l]-'0'<=9) {
			sum=sum*10+n[l]-'0';
			l++;
		}
		if(n[l]-'0'<0||n[l]-'0'>9) {
			res+=sum;
			sum=0;
			l++;
		}
	}return res;
}
int main() {
	long long t;
	cin >> t;
	while (t--) {
		string n;
		cin >> n;
		cout << tong(n) << endl;
	}
}
