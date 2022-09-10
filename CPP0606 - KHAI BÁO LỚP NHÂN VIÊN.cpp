#include<iostream>
using namespace std;

class NhanVien{
	private :
		string ten,ma,dc,sinh,gt,hd;
		long long thue;
	public :
		NhanVien(){
			ma=sinh=dc=ten=gt=hd="";
			thue =0 ;
		}
		void nhap();
		void xuat();
};
void NhanVien :: nhap(){
	getline(cin,this->ten);
	cin >> this -> gt >> this -> sinh;
	cin.ignore();
	getline(cin,this -> dc);
	cin >> this -> thue >> this -> hd;
	if(this->sinh[1]=='/') this->sinh = '0' + this->sinh;
	if(this->sinh[4]=='/') this->sinh.insert(3,"0");
	if(this->hd[1]=='/') this->hd = '0' + this->hd;
	if(this->hd[4]=='/') this->hd.insert(3,"0");
}
void NhanVien :: xuat(){
	this->ma ="00001";
	cout << this-> ma << " " << this->ten <<  " " <<this ->gt <<" "<< this->sinh << " " << this->dc << " "<< this->thue << " "<<this->hd<<endl;
}



int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}

