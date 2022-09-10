#include<iostream>
using namespace std;


class SinhVien{
	private:
		string ten,email,ma;
	public:
		string lop;
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
int main(){
    SinhVien ds[1000];
    long long n;
    cin >> n;
    for(long long i=0;i<n;i++){
    	cin >> ds[i];
    }long long t;
    cin >> t;
    while(t--){
    	string s;
    	cin >> s;
    	cout << "DANH SACH SINH VIEN KHOA " + s <<":"<<endl;
    	for(long long i=0;i<n;i++){
    		if(ds[i].lop[1]+ds[i].lop[2]==s[2]+s[3]) cout << ds[i];
    	}

    }

}