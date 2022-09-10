#include<iostream>
#include<vector>

using namespace std;

long long check(char x){
	return x=='a'||x=='e'||x=='y'||x=='o'||x=='u'||x=='i';
}
int main() {
	string s;
	cin >> s;
	vector<char> v;
	vector<char> res;
	for(char x : s) v.push_back(tolower(x));
	for(char x : v) {
		if(!check(x)) res.push_back(x);
	}for(char x : res) cout <<'.'<< x;

}