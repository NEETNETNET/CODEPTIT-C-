
#include<iostream>
#include<iomanip>

using namespace std;

struct NhanVien{
	string msv ="00001",ten,gt,sinh,dc,hd;
	long long thue;
};
void nhap(NhanVien &a){
	getline(cin,a.ten);
	cin >> a.gt >> a.sinh;
	cin.ignore();
	getline(cin,a.dc);
	cin >> a.thue;
	cin >> a.hd;
	if(a.sinh[1]=='/') a.sinh = '0' + a.sinh;
	if(a.sinh[4]=='/') a.sinh.insert(3,"0");
	if(a.hd[1]=='/') a.hd = '0' + a.hd;
	if(a.hd[4]=='/') a.hd.insert(3,"0");

}void in(NhanVien a){
	cout << a.msv <<  " " << a.ten << " " << a.gt << " " << a.sinh << " " << a.dc << " " << a.thue << " " << a.hd << endl;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
