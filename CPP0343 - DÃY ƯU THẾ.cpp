#include<iostream>
#include<sstream>
using namespace std;


long long c(string n){
	long long s=0;
	for(long long i=n.length()-1;i>=0;i--) s=10*s+(n[i]-'0');
	return s;
}
int main(){
    long long t;
    cin >> t;
    cin.ignore();
    while(t--){
    	long long le=0,cnt=0,chan=0;
    	string n;
    	getline(cin,n);
    	stringstream ss(n);
    	string tmp;
    	while(ss >> tmp){
    		cnt++;
    		if(c(tmp)%2==0) chan++;
    		else le++;

    	}if(cnt%2==0&&chan>le) cout << "YES" << endl;
    	else if(cnt%2!=0&&le>chan) cout << "YES" <<endl;
    	else cout << "NO" <<endl;
    }
}
