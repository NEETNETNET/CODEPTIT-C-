
#include<iostream>
#include<iomanip>

using namespace std;

struct SinhVien{
	string msv = "B20DCCN001";
	string ten,lop,sinh;
	double gpa;
};
void nhap(SinhVien &a){
	getline(cin,a.ten);
	getline(cin,a.lop);
	getline(cin,a.sinh);
	cin >> a.gpa;
	if(a.sinh[1]=='/') a.sinh = '0' + a.sinh;
	if(a.sinh[4]=='/') a.sinh.insert(3,"0");
}
void in(SinhVien a){
	cout << a.msv << " " << a.ten << " " <<a.lop <<" "<< a.sinh << " "<< fixed << setprecision(2) << a.gpa << endl;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
