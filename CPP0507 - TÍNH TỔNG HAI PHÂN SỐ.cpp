#include<bits/stdc++.h>
using namespace std;


struct PhanSo{
	long long tu, mau;
};
void nhap(PhanSo &p){
	cin >> p.tu >> p.mau ;
}void rutgon(PhanSo &p){
	long long n = __gcd(p.tu,p.mau);
	p.tu /=n;
	p.mau/=n;
}void in(PhanSo p ){
	cout << p.tu << '/' << p.mau;
}
PhanSo tong(PhanSo a,PhanSo b){
    long long gcd=__gcd(a.mau,b.mau);
	long long lcm= a.mau*b.mau / gcd;
	a.tu=lcm / a.mau * a.tu;
	b.tu = lcm / b.mau * b.tu;
	a.tu+=b.tu;
	a.mau=lcm;
	rutgon(a);
	return a;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}