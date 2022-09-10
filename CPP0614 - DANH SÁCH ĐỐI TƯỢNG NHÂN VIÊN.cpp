#include<iostream>
using namespace std;
long long cnt=0;
class NhanVien{
	private:
		string ten,gt,ns,dc,hd,thue;
	public:
		NhanVien(){
			ten=gt=ns=dc=hd=thue="";
		}
		friend istream& operator >> (istream&, NhanVien&);
		friend ostream& operator << (ostream&,NhanVien );
};
istream& operator >> (istream& in, NhanVien &a){
	scanf("\n");
	getline(in,a.ten);
	getline(in,a.gt);
	getline(in,a.ns);
	getline(in,a.dc);
	getline(in,a.thue);
	getline(in,a.hd);
	if(a.ns[1]=='/') a.ns= '0' + a.ns;
	if(a.ns[4]=='/') a.ns.insert(3,"0");
	if(a.hd[1]=='/') a.hd= '0' + a.hd;
	if(a.hd[4]=='/') a.hd.insert(3,"0");
	return in ;
}
ostream& operator << (ostream& out,NhanVien a ){
	cnt++;
	out << string(5-to_string(cnt).size(),'0') + to_string(cnt)<<" ";
	out <<a.ten << " " << a.gt << " " << a.ns << " " << a.dc<< " " << a.thue << " " << a.hd<< endl;
	return out;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
