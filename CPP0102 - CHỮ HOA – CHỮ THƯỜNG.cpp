#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		char n;
		cin >> n;
		if(n>=65&&n<=90) cout <<(char) (n + 32)<<endl ;
		else cout <<(char) (n - 32) <<endl;
	}
}
