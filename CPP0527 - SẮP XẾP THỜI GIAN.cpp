#include<iostream>
#include<algorithm>
using namespace std;

struct Tg{
	long long gio,phut,giay;
};
void nhap(Tg &a){
	cin >> a.gio >> a.phut >> a.giay;
}
void inds(Tg a[],int n){
	for(int i =0;i<n;i++) cout << a[i].gio <<" "<<a[i].phut<<" " << a[i].giay<<endl;

}
bool cmp(Tg a,Tg b){
	if(a.gio<b.gio) return true;
	if(a.gio==b.gio&&a.phut<b.phut) return true;
	if(a.gio==b.gio&&a.phut==b.phut&&a.giay<b.giay) return true;
	return false;
}
void sapxep(Tg a[],int n){
	sort(a,a+n,cmp);
}
int main(){
    struct Tg ds[5000];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
