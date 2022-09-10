#include<iostream>
#include<algorithm>
using namespace std;
class DoanhNghiep{
private:
	string ten;
public:
	long long sv;
	string ma;
	DoanhNghiep(){
		ten=ma="";
		sv=0;
	}
	friend istream& operator >> (istream&,DoanhNghiep&);
	friend ostream& operator << (ostream&,DoanhNghiep);
};
istream& operator >> (istream& in,DoanhNghiep &a){
	scanf("\n");
	getline(in,a.ma);
	getline(in,a.ten);
	cin >> a.sv;
	return in;

}
ostream& operator << (ostream& out,DoanhNghiep a){
	out << a.ma << " " << a.ten << " " << a.sv << endl;
	return out;
}
bool cmp(DoanhNghiep a,DoanhNghiep b){
	if(a.sv > b.sv) return true;
	if(a.sv==b.sv&& a.ma<b.ma) return true;
	return false;
}
void sapxep(DoanhNghiep a[],int n){
	sort(a,a+n,cmp);
}
int main() {
	int n;
	cin >> n;
	DoanhNghiep ds[1000];
	for(int i =0;i<n; i++) cin >>ds[i];
	sapxep(ds,n);
	for(int i =0;i<n;i++) cout << ds[i];
}
