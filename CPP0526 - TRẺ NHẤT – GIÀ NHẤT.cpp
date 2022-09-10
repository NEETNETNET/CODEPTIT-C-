#include<iostream>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;

struct NhanVien{
	string ten,ns,tong;
	long long n,t,nam;
};
void nhap(NhanVien &a){
	scanf("\n");
	getline(cin,a.tong);
	string tmp;
	vector<string> v;
	stringstream ss(a.tong);
	while(ss>>tmp){
		v.push_back(tmp);
	}a.ten=v[0];
	a.ns=v[1];
	a.n=(a.ns[0]-'0')*10+a.ns[1]-'0';
	a.t=(a.ns[3]-'0')*10+a.ns[4]-'0';
	a.nam=(a.ns[6]-'0')*1000+(a.ns[7]-'0')*100+(a.ns[8]-'0')*10+a.ns[9]-'0';
}
void inds(NhanVien a[],int n){
	cout << a[n-1].ten<< endl;
	cout <<a[0].ten << endl;

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
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}