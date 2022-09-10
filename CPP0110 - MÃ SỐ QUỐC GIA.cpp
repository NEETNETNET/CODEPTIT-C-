#include<iostream>
using namespace std;

int main (){
	int t;
	cin>>t;
	while(t--){
		string n;
		cin >> n;
		int s = n.find("084");
		n.erase(s,3);
		cout << n << endl;
	}
}
