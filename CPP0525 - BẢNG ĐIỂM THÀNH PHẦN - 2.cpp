#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
struct SinhVien{
	string ma,ten,lop;
	double diem1,diem2,diem3;
};
void nhap(SinhVien &a){
	getline(cin,a.ma);
	getline(cin,a.ten);
	getline(cin,a.lop);
	cin>> a.diem1 >> a.diem2 >> a.diem3;
	cin.ignore();
}
void in_ds(SinhVien a){
	cout << a.ma << " " << a.ten << " " << a.lop << " " <<fixed << setprecision(1) <<a.diem1 << " " << a.diem2 << " "<<a.diem3<<endl;

}
bool cmp(SinhVien a , SinhVien b){
	return a.ten<b.ten;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    struct SinhVien ds[100];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sort(ds,ds+n,cmp);
	for(int i = 0; i < n; i++) {
		cout << i+1 <<" ";
	    in_ds(ds[i]);
	    cout << endl;
	}
    return 0;
}

