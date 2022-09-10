#include<iostream>
#include<algorithm>
using namespace std;

long long cnt=0;
struct NhanVien{
	string ma,ten,gt,ns,dc,hd,thue;
	long long n,t,nam;
};
void nhap(NhanVien &a){
	cnt++;
	a.ma= string(5-to_string(cnt).size(),'0') + to_string(cnt);
	scanf("\n");
	getline(cin,a.ten);
	getline(cin,a.gt);
	getline(cin,a.ns);
	getline(cin,a.dc);
	getline(cin,a.thue);
	getline(cin,a.hd);
	if(a.ns[1]=='/') a.ns='0'+a.ns;
	if(a.ns[4]=='/') a.ns.insert(3,"0");
	if(a.hd[1]=='/') a.hd='0'+a.hd;
	if(a.hd[4]=='/') a.hd.insert(3,"0");
	a.t=(a.ns[0]-'0')*10+a.ns[1]-'0';
	a.n=(a.ns[3]-'0')*10+a.ns[4]-'0';
	a.nam=(a.ns[6]-'0')*1000+(a.ns[7]-'0')*100+(a.ns[8]-'0')*10+a.ns[9]-'0';
}
void inds(NhanVien a[],int n){
	for(int i =0;i<n;i++){
		cout << a[i].ma << " " << a[i].ten << " "<< a[i].gt << " "<< a[i].ns << " "<< a[i].dc << " "<< a[i].thue << " "<< a[i].hd << endl;
	}
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