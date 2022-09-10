#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;



int main(){
	long long t;
	double x1,y1,x2,y2;
	cin >> t;
	while(t--){
		cin >> x1 >> y1 >> x2 >> y2;
		cout << fixed << setprecision(4)<<sqrt(pow((x1-x2),2)+pow((y1-y2),2)) << endl;

	}







}
