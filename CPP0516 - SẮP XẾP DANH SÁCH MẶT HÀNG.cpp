
#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;


struct MatHang{
	string ten,nhom;
	double mua,ban,lai;
	long long ma;
};
void nhap(MatHang a[],int N){
	for(int i =0;i<N;i++){
		a[i].ma=i+1;
		cin.ignore();
		getline(cin,a[i].ten);
		getline(cin,a[i].nhom);
		cin >> a[i].mua >> a[i].ban;
		a[i].lai=a[i].ban-a[i].mua;
	}
}
void in(MatHang a[],int N){
	for(int i =0 ; i<N;i++){
		cout <<a[i].ma <<" "<< a[i].ten << " "<<a[i].nhom << " " << fixed << setprecision(2) << a[i].lai << endl;
	}

}
bool cmp(MatHang a,MatHang b){
	return a.lai > b.lai;
}
void sapxep(MatHang a[],int N){
	sort(a,a+N,cmp);
}
int main(){
    struct MatHang ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
