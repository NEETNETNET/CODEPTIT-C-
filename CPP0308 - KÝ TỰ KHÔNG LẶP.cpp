#include<iostream>
using namespace std;
int main(){
	long long t;
	cin >> t;
	while(t--){
		string n;
		cin >> n;
		int cnt[1000] = {0};
		for(int i=0;i<n.length();i++){
			cnt[n[i]]++;
		}for(int i=0;i<n.length();i++){
			if(cnt[n[i]]==1) cout << n[i];
		}cout << "\n";

	}





}
