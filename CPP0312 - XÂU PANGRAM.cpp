#include<iostream>
#include<set>
using namespace std;

int main(){
    long long t;
    cin >> t ;
    while(t--){
    	string s;
    	long long n;
    	cin >> s >> n;
    	set<char> k;
    	for(char x : s) k.insert(x);
    	if(26-k.size()<=n) cout << 1 << endl;
    	else cout << 0 << endl;
    }

}
