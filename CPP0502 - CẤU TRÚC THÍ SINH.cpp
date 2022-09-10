
#include<iostream>
#include<iomanip>

using namespace std;

struct ThiSinh{
	string ten,sinh;
	double mon1,mon2,mon3;
};
void nhap(ThiSinh &a){
	getline(cin,a.ten);
	cin >> a.sinh;
	cin >> a.mon1 >> a.mon2 >> a.mon3;
	if(a.sinh[1]=='/') a.sinh = '0' + a.sinh;
	if(a.sinh[4]=='/') a.sinh.insert(3,"0");
}
void in(ThiSinh a){
	cout << a.ten <<  " " << a.sinh << " " << fixed << setprecision(1) << a.mon1+a.mon2+a.mon3 <<endl;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
