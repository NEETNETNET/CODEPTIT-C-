
#include<iostream>
#include<iomanip>

using namespace std;

struct SinhVien{
	string msv ="N20DCCN001",ten,lop,sinh;
	double gpa;
};
void nhapThongTinSV(SinhVien &a){
	getline(cin,a.ten);
	cin >> a.lop;
	cin >> a.sinh;
	cin >> a.gpa;
	if(a.sinh[1]=='/') a.sinh = '0' + a.sinh;
	if(a.sinh[4]=='/') a.sinh.insert(3,"0");


}void inThongTinSV(SinhVien a){
	cout << a.msv <<  " " << a.ten << " " << a.lop << " " << a.sinh << " " << fixed << setprecision(2) << a.gpa<< endl;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
