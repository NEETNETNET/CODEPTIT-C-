#include<bits/stdc++.h>
using namespace std;


int main(){
    long long m,s;
    cin >> m >> s;
    if(s>9*m||(s==0&&m>=2)) {
    	cout << -1 << " " << -1 ;
    	return 0;
    }long long  lon[m]={0},be[m]={0};
    long long tmp=s;
    for(long long i =0 ;i<m;i++){
    	if(s>=9) {
    		lon[i]=9;
    		s-=9;
    	}else if(s!=0){
    		lon[i]=s;
    		s=0;
    	}else break;
    }tmp--;
    for(long long i=m-1;i>=1;i--){
    	if(tmp>=9){
    		be[i]=9;
    		tmp-=9;
    	}else if(tmp!=0){
    		be[i]=tmp;
    		tmp=0;
    	}else break;
    }be[0]=tmp+1;
    for(long long i =0;i<m;i++) cout << be[i];
    cout << " " ;
    for(long long i =0;i<m;i++) cout << lon[i];


}
