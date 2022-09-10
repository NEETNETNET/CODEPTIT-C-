#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	int test;
	cin>>test;
	string str;
	while(test--){
		cin>>str;
		int x=str.size();
		int dem=0;
		for(int i=0;i<x;i++){
			for(int j=i;j<x;j++){
				if(str[i]==str[j]) dem++;
			}
		} cout<<dem<<endl;
	}
}