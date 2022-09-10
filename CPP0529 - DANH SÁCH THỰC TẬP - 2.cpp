#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

long long cnt=0;
struct SinhVien{
	string stt,ma,ten,lop,email,dn;
};
void nhap(SinhVien &a){
	cnt++;
	scanf("\n");
	getline(cin,a.ma);
	getline(cin,a.ten);
	getline(cin,a.lop);
	getline(cin,a.email);
	getline(cin,a.dn);
	a.stt=to_string(cnt);
}
void in(SinhVien a){
	cout <<a.stt <<" "<<a.ma <<" "<<a.ten << " " <<a.lop << " " << a.email<<" "<<a.dn << endl;
}
bool cmp(SinhVien a,SinhVien b){
	return a.ma < b.ma;
}
int main(){
    SinhVien ds[1000];
    long long n;
    cin >> n;
    for(long long i=0;i<n;i++){
    	nhap(ds[i]);
    }long long t;
    cin >> t;
    while(t--){
    	vector<SinhVien> v;
    	string s;
    	cin >> s;
    	for(long long i=0;i<n;i++){
    		if(ds[i].dn==s) v.push_back(ds[i]);
    	}sort(v.begin(),v.end(),cmp);
    	for(SinhVien x : v) in(x);

    }

}
