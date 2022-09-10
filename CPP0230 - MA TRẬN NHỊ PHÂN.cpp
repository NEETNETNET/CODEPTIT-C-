#include<iostream>
using namespace std;


int main(){
   long long n,cnt=0;
   cin >> n;
   long long a[n][3];
   for(long long i =0 ; i<n;i++){
	   for(long long k =0 ; k <3 ; k++){
		   cin >> a[i][k];
	   }
   }for(long long i =0 ; i<n;i++){
	   long long one=0,zero=0;
	   for(long long k =0 ; k <3 ; k++){
		   if(a[i][k]==0) zero ++;
		   else if(a[i][k]==1) one ++;
	   }if(one > zero) {
		   cnt++;
	   }
   }
   cout << cnt << endl;


}
