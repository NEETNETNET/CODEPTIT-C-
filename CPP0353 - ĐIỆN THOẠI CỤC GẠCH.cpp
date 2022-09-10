#include<iostream>
using namespace std;

long long tn(string s){
	long long l=0,r= s.length()-1;
	while(l<=r){
		if(s[l]!=s[r]) return 0;
		r--;
		l++;
	}return 1;
}
int main(){
    long long t;
    cin >> t ;
    while(t--){
    	string s,n="";
    	cin >> s;
    	for(char x : s){
    		if(x=='A'||x=='B'||x=='C'||x=='a'||x=='b'||x=='c') n+='2';
    		if(x=='D'||x=='E'||x=='F'||x=='d'||x=='e'||x=='f') n+='3';
    		if(x=='G'||x=='H'||x=='I'||x=='g'||x=='h'||x=='i') n+='4';
    		if(x=='J'||x=='K'||x=='L'||x=='j'||x=='k'||x=='l') n+='5';
    		if(x=='M'||x=='N'||x=='O'||x=='m'||x=='n'||x=='o') n+='6';
    		if(x=='P'||x=='Q'||x=='R'||x=='S'||x=='p'||x=='q'||x=='r'||x=='s') n+='7';
    		if(x=='T'||x=='U'||x=='V'||x=='t'||x=='u'||x=='v') n+='8';
    		if(x=='W'||x=='X'||x=='Y'||x=='Z'||x=='w'||x=='x'||x=='y'||x=='z') n+='9';

    	}if(tn(n)) cout << "YES" << endl;
    	else cout << "NO" << endl;
    }

}
