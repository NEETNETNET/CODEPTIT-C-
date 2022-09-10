#include<iostream>
#include<algorithm>
using namespace std;
long long cnt=0;
class NhanVien{
	private:
		string ten,gt,dc,hd,thue,ma;
	public:
		string ns;
		int n,t,nam;
		NhanVien(){
			ten=gt=ns=dc=hd=thue=ma="";
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
	cnt++;
	a.ma=string(5-to_string(cnt).size(),'0') + to_string(cnt);
	a.t=(a.ns[0]-'0')*10+a.ns[1]-'0';
	a.n=(a.ns[3]-'0')*10+a.ns[4]-'0';
	a.nam=(a.ns[6]-'0')*1000+(a.ns[7]-'0')*100+(a.ns[8]-'0')*10+a.ns[9]-'0';
	return in ;
}
ostream& operator << (ostream& out,NhanVien a ){
	out <<a.ma<<" "<<a.ten << " " << a.gt << " " << a.ns << " " << a.dc<< " " << a.thue << " " << a.hd<< endl;
	return out;
}
bool cmp(NhanVien a,NhanVien b){
	if(a.nam<b.nam) return true;
	if(a.nam==b.nam&&a.t<b.t) return true;
	if(a.nam==b.nam&&a.t==b.t&&a.n<b.n) return true;
	return false;
}
void sapxep(NhanVien a[],int n){
	sort(a,a+n,cmp);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
