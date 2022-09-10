#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	long long t;
	cin >> t;
	while(t--){
		string s;
		long long a[1000]={0},cnt=0;
		cin >> s;
		for(long long i =0 ;i< s.length();i++) {
			a[s[i]]++;
			cnt=max(cnt,a[s[i]]);
		}if(s.length()-cnt>=(cnt-1)) cout << 1 << endl;
		else cout << 0 << endl;
	}
}
