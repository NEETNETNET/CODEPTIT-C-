
#include<iostream>
#include<iomanip>

using namespace std;

struct  NhanVien{
	string ten,gt,sinh,dc,hd;
	long long thue;
};
void nhap(NhanVien &a){
	cin.ignore();
	getline(cin,a.ten);
	cin >> a.gt >> a.sinh;
	cin.ignore();
	getline(cin,a.dc);
	cin >> a.thue;
	cin >> a.hd;
	if(a.sinh[1]=='/') a.sinh = '0' + a.sinh;
	if(a.sinh[4]=='/') a.sinh.insert(3,"0");
	if(a.hd[1]=='/') a.hd = '0' + a.hd;
	if(a.hd[4]=='/') a.hd.insert(3,"0");
}
void inds(NhanVien a[],int n) {
	for(int i = 0;i<n;i++){
		string s = to_string(i+1);
		s= string(5-s.size(),'0')+s;
		cout << s <<  " " << a[i].ten << " " << a[i].gt << " " << a[i].sinh << " " << a[i].dc << " " << a[i].thue << " " << a[i].hd << endl;
	}

}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
