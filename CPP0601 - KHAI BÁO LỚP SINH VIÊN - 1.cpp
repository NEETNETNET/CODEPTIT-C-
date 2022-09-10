#include<iostream>
#include<iomanip>
using namespace std;

class SinhVien{
	private :
		string ten,ma,lop,sinh;
		double gpa;
	public :
		SinhVien(){
			ma=sinh=lop=ten="";
			gpa =0 ;
		}
		void nhap();
		void xuat();
};
void SinhVien :: nhap(){
	getline(cin,this->ten);
	cin >> this -> lop >> this -> sinh >> this -> gpa;
	if(this->sinh[1]=='/') this->sinh = '0' + this->sinh;
	if(this->sinh[4]=='/') this->sinh.insert(3,"0");
}
void SinhVien :: xuat(){
	this->ma ="B20DCCN001";
	cout << this-> ma << " " << this->ten <<  " " << this->lop << " " << this->sinh << " "<<fixed<<setprecision(2) <<this->gpa <<endl;
}



int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
