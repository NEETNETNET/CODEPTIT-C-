

#include<iostream>
#include<set>
using namespace std;

long long dd(string n){
	set<char> s;
	for(char x : n) {
		if(x-'0'>=0&&x-'0'<=9) s.insert(x);
	}if(s.size()==10) return 1;
	return 0;
}

int main(){
    long long t;
    cin >> t;
    while(t--){
    	string s;
    	long long ok=1;
    	cin >> s;
    	for(long long i=0;i<s.length();i++){
    		if(s[0]-'0'==0||s[i]-'0'>9||s[i]-'0'<0){
    			cout << "INVALID"<<endl;
    			ok=0;
    			break;
    		}
    	}
    	if(ok){
    		if(dd(s)) cout << "YES" <<endl;
    		else cout << "NO" <<endl;
    	}

    }
}
