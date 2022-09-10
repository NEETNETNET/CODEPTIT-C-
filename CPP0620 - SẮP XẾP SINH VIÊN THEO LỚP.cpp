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
bool cmp(SinhVien a,SinhVien b){
	if(a.lop<b.lop) return true;
	if(a.lop==b.lop&&a.ma<b.ma) return true;
	return false;
}
void sapxep(SinhVien a[],int n){
	sort(a,a+n,cmp);
}
int main(){
    SinhVien ds[1000];
    int N, i;
    cin >> N;
    cin.ignore();
    for(i=0;i<N;i++){
        cin >> ds[i];
    }sapxep(ds,N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}