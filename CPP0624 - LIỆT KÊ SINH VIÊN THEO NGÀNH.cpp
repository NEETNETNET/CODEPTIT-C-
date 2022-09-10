#include<iostream>
#include<algorithm>

using namespace std;


class SinhVien{
	private:
		string ten,email;
	public:
		string ma,lop;
		SinhVien(){
			ma=lop=ten=email="";

		}
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&,SinhVien );
};
istream& operator >> (istream& in, SinhVien &a){
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
    cin.ignore();
    for(long long i=0;i<n;i++){
    	cin >> ds[i];
    }long long t;
    cin >> t;
    cin.ignore();
    while(t--){
    	string s; 
    	getline(cin, s);
    	string a; 
    	for (int i = 0; i < s.length(); i++) a.push_back(toupper(s[i]));
    	cout << "DANH SACH SINH VIEN NGANH " << a << ":" << endl;
    	for (int i = 0; i < n; i++) {
    		if (ds[i].ma[5] == s[0]) {
    			if ((s[0] == 'K' || s[0] == 'V' || s[0] == 'D'))cout << ds[i];
    			else if (ds[i].lop[0] != 'E') cout << ds[i];
    		}
    	}
    }


}