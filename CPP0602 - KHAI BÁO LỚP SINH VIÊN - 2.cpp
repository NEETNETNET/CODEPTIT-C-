#include<iostream>
#include<iomanip>
using namespace std;
using ll = long long ;
class SinhVien{
	private :
		string ten,ma,lop,sinh;
		double gpa;
	public :
		SinhVien(){
			ma=sinh=lop=ten="";
			gpa =0 ;
		}
		friend ostream& operator << (ostream&,SinhVien);
		friend istream& operator >> (istream&,SinhVien&);
};
ostream& operator << (ostream& out,SinhVien a){
	a.ma="B20DCCN001";
	if(a.sinh[1]=='/') a.sinh = '0' + a.sinh;
	if(a.sinh[4]=='/') a.sinh.insert(3,"0");
	out << a.ma << " " << a.ten << " " << a.lop <<  " " << a.sinh << " " << fixed << setprecision(2) << a.gpa << endl;
	return out;
}
istream& operator >> (istream& in,SinhVien &a){
	getline(in,a.ten);
	in >> a.lop >> a.sinh >> a.gpa;
	return in ;
}


int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
