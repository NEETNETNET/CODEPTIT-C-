#include<iostream>
#include<stack>
#include<sstream>
using namespace std;

int main(){
	long long n,t;
	cin >> t;
	cin.ignore();
	while(t--){
		stack<string> st;
		string n;
		getline(cin,n);
		stringstream ss(n);
		string tmp;
		while(ss >> tmp) st.push(tmp);
		while(!st.empty()){
			cout << st.top() << " ";
			st.pop();
		}cout<< "\n";
	}

}
