#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


class SinhVien{
	private:
		string ten,email,lop;
	public:
		string ma;
		SinhVien(){
			ma=lop=ten=email="";

		}
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&,SinhVien );
};
istream& operator >> (istream& in, SinhVien &a){
	scanf("\n");
	getline(in,a.ma);
	getline(in,a.ten);
	getline(in,a.lop);
	getline(in,a.email);
	return in ;
}
ostream& operator << (ostream& out,SinhVien a ){
	out <<a.ma <<" "<<a.ten << " " <<a.lop << " " << a.email << endl;
	return out;
}
bool cmp(SinhVien a,SinhVien b){
	return a.ma < b.ma;
}
int main(){
    vector<SinhVien> ds;
    SinhVien tmp;
    while(cin>>tmp){
    	ds.push_back(tmp);
    }sort(ds.begin(),ds.end(),cmp);
    for(long long i =0 ; i<ds.size();i++) cout << ds[i];
}
